#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import cv2
import mediapipe as mp
import numpy as np
import math
from collections import deque

class HandTrackerPublisher(Node):
    def __init__(self):
        super().__init__('hand_tracker_publisher')
        self.publisher_ = self.create_publisher(Float32MultiArray, '/detected_angles', 10)

        self.cap = cv2.VideoCapture(0)
        if not self.cap.isOpened():
            self.get_logger().error("Webcam not accessible.")
            exit(1)

        self.hands = mp.solutions.hands.Hands(
            max_num_hands=1,
            model_complexity=0,
            min_detection_confidence=0.7,
            min_tracking_confidence=0.7
        )

        # Smoothing filters
        self.base_history = deque(maxlen=5)
        self.rear_history = deque(maxlen=5)

        self.timer = self.create_timer(0.1, self.track_and_publish)
        self.get_logger().info("Hand Tracker Publisher Initialized")

    def track_and_publish(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warn("Could not read frame from camera.")
            return

        frame = cv2.flip(frame, 1)
        h, w, _ = frame.shape
        center_x, center_y = w // 2, h // 2

        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        result = self.hands.process(rgb)

        base_angle = 0.0
        rear_angle = 0.0

        if result.multi_hand_landmarks:
            hand = result.multi_hand_landmarks[0]
            palm = hand.landmark[0]  # wrist/palm base

            palm_x = int(palm.x * w)
            palm_y = int(palm.y * h)

            # Draw tracking
            cv2.circle(frame, (palm_x, palm_y), 10, (0, 0, 255), -1)
            mp.solutions.drawing_utils.draw_landmarks(frame, hand, mp.solutions.hands.HAND_CONNECTIONS)

            # Map X and Y to angles
            base_angle = self.map_centered_x_to_angle(palm_x, center_x, max_angle=90)
            rear_angle = self.map_centered_y_to_angle(palm_y, center_y, max_angle=60)

            base_angle = self.smooth_angle(base_angle, self.base_history)
            rear_angle = self.smooth_angle(rear_angle, self.rear_history)

            self.get_logger().info(f'Base: {base_angle:.2f}°, Rear: {rear_angle:.2f}°')

        # Create and publish message
        msg = Float32MultiArray()
        msg.data = [
            math.radians(base_angle),   # magician_joint_1
            math.radians(rear_angle),   # magician_joint_2
            0.0                         # magician_joint_3 (unused for now)
        ]
        self.publisher_.publish(msg)

        # Draw coordinate system
        cv2.line(frame, (center_x, 0), (center_x, h), (0, 255, 0), 1)
        cv2.line(frame, (0, center_y), (w, center_y), (0, 255, 0), 1)
        cv2.circle(frame, (center_x, center_y), 5, (255, 255, 0), -1)
        cv2.putText(frame, 'Origin', (center_x + 10, center_y - 10),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 255), 1)

        cv2.imshow("Hand Tracking", frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info("Exiting...")
            rclpy.shutdown()

    def map_centered_x_to_angle(self, x, center_x, max_angle=90):
        relative = x - center_x
        angle = (relative / center_x) * max_angle
        return clamp(angle, -max_angle, max_angle)

    def map_centered_y_to_angle(self, y, center_y, max_angle=60):
        relative = center_y - y
        angle = (relative / center_y) * max_angle
        return clamp(angle, -max_angle, max_angle)

    def smooth_angle(self, value, history):
        history.append(value)
        return sum(history) / len(history)

    def on_shutdown(self):
        self.cap.release()
        cv2.destroyAllWindows()

def clamp(value, min_value, max_value):
    return max(min_value, min(max_value, value))

def main(args=None):
    rclpy.init(args=args)
    node = HandTrackerPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.on_shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
