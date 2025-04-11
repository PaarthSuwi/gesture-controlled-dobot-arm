#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import cv2
import mediapipe as mp
import numpy as np
import math
from collections import deque

mp_hands = mp.solutions.hands
mp_drawing = mp.solutions.drawing_utils

class FingerAnglePublisher(Node):
    def __init__(self):
        super().__init__('gesture_angle_publisher')
        self.publisher_ = self.create_publisher(Float32MultiArray, '/detected_angles', 10)

        self.cap = cv2.VideoCapture(0)
        if not self.cap.isOpened():
            self.get_logger().error("Webcam not accessible.")
            exit(1)

        self.hands = mp_hands.Hands(
            max_num_hands=1,
            model_complexity=1,
            min_detection_confidence=0.7,
            min_tracking_confidence=0.7
        )

        self.history_base = deque(maxlen=10)
        self.history_rear = deque(maxlen=10)
        self.history_forearm = deque(maxlen=10)

        # Last known good values
        self.last_base = 0.0
        self.last_rear = 0.0
        self.last_forearm = 0.0

        self.timer = self.create_timer(0.1, self.detect_and_publish)
        self.get_logger().info("Gesture Angle Publisher Initialized")

    def detect_and_publish(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warn("Failed to read frame from camera.")
            return

        frame = cv2.flip(frame, 1)
        h, w, _ = frame.shape
        center_x, center_y = w // 2, h // 2

        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        result = self.hands.process(rgb)

        base_angle = self.last_base
        rear_arm_angle = self.last_rear
        forearm_angle = self.last_forearm
        control_mode = None

        if result.multi_hand_landmarks:
            hand = result.multi_hand_landmarks[0]
            landmarks = hand.landmark

            index_tip = [landmarks[8].x * w, landmarks[8].y * h]
            index_pip = [landmarks[6].x * w, landmarks[6].y * h]
            middle_tip = [landmarks[12].x * w, landmarks[12].y * h]
            middle_pip = [landmarks[10].x * w, landmarks[10].y * h]
            ring_tip = [landmarks[16].x * w, landmarks[16].y * h]
            ring_pip = [landmarks[14].x * w, landmarks[14].y * h]

            fingers_up = 0
            if index_tip[1] < index_pip[1]:
                fingers_up += 1
            if middle_tip[1] < middle_pip[1]:
                fingers_up += 1
            if ring_tip[1] < ring_pip[1]:
                fingers_up += 1

            if fingers_up == 1:
                control_mode = 'base'
                raw = self.map_centered_x_to_angle(index_tip[0], center_x)
                base_angle = self.smooth_angle(raw, self.history_base)
                self.last_base = base_angle

            elif fingers_up == 2:
                control_mode = 'rear arm'
                raw = self.map_centered_y_to_angle(index_tip[1], center_y)
                rear_arm_angle = self.smooth_angle(raw, self.history_rear)
                self.last_rear = rear_arm_angle

            elif fingers_up == 3:
                control_mode = 'forearm'
                raw = self.map_centered_y_to_angle(middle_tip[1], center_y)
                forearm_angle = self.smooth_angle(raw, self.history_forearm)
                self.last_forearm = forearm_angle

            mp_drawing.draw_landmarks(frame, hand, mp_hands.HAND_CONNECTIONS)

            cv2.putText(frame, f"Mode: {control_mode or 'None'}", (10, 30),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 0), 2)

            # Draw red dot at palm base
            cx = int(landmarks[0].x * w)
            cy = int(landmarks[0].y * h)
            cv2.circle(frame, (cx, cy), 8, (0, 0, 255), -1)

        # Coordinate crosshair and center
        cv2.line(frame, (center_x, 0), (center_x, h), (0, 255, 0), 1)
        cv2.line(frame, (0, center_y), (w, center_y), (0, 255, 0), 1)
        cv2.circle(frame, (center_x, center_y), 5, (0, 255, 255), -1)
        cv2.putText(frame, 'Origin', (center_x + 10, center_y - 10),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 255), 1)

        # Send to robot
        msg = Float32MultiArray()
        msg.data = [
            math.radians(base_angle),
            math.radians(rear_arm_angle),
            math.radians(forearm_angle)
        ]
        self.publisher_.publish(msg)

        cv2.imshow("Gesture Tracker", frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info("Exiting...")
            rclpy.shutdown()

    def map_centered_y_to_angle(self, y, center_y, max_angle=90):
        delta = center_y - y
        angle = (delta / center_y) * max_angle
        return clamp(angle, -max_angle, max_angle)

    def map_centered_x_to_angle(self, x, center_x, max_angle=180):
        delta = x - center_x
        angle = (delta / center_x) * (max_angle / 2)
        return clamp(angle, -max_angle / 2, max_angle / 2)

    def smooth_angle(self, new_angle, history, alpha=0.3):
        if len(history) == 0:
            history.append(new_angle)
        else:
            smoothed = alpha * new_angle + (1 - alpha) * history[-1]
            history.append(smoothed)
        return history[-1]

    def on_shutdown(self):
        self.cap.release()
        cv2.destroyAllWindows()

def clamp(value, min_value, max_value):
    return max(min_value, min(max_value, value))

def main(args=None):
    rclpy.init(args=args)
    node = FingerAnglePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.on_shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
