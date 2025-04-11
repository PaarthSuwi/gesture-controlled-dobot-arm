#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import cv2
import mediapipe as mp
import numpy as np
import math

# Drawing utility
mp_drawing = mp.solutions.drawing_utils
mp_pose = mp.solutions.pose

class ArmAnglePublisher(Node):
    def __init__(self):
        super().__init__('gesture_angle_publisher')
        self.publisher_ = self.create_publisher(Float32MultiArray, '/detected_angles', 10)
        self.pose = mp_pose.Pose()
        self.cap = cv2.VideoCapture(0)

        if not self.cap.isOpened():
            self.get_logger().error("Webcam not accessible. Exiting.")
            exit(1)

        self.timer = self.create_timer(0.1, self.detect_and_publish)  # 10Hz
        self.get_logger().info("Gesture Angle Publisher Initialized")

    def detect_and_publish(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warn("Could not read frame from camera.")
            return

        # Flip for mirror view
        frame = cv2.flip(frame, 1)

        # Convert to RGB
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.pose.process(rgb_frame)

        if results.pose_landmarks:
            landmarks = results.pose_landmarks.landmark

            shoulder = [landmarks[mp_pose.PoseLandmark.LEFT_SHOULDER.value].x * frame.shape[1],
                        landmarks[mp_pose.PoseLandmark.LEFT_SHOULDER.value].y * frame.shape[0]]
            elbow = [landmarks[mp_pose.PoseLandmark.LEFT_ELBOW.value].x * frame.shape[1],
                     landmarks[mp_pose.PoseLandmark.LEFT_ELBOW.value].y * frame.shape[0]]
            wrist = [landmarks[mp_pose.PoseLandmark.LEFT_WRIST.value].x * frame.shape[1],
                     landmarks[mp_pose.PoseLandmark.LEFT_WRIST.value].y * frame.shape[0]]

            rear_arm_angle = calculate_angle(shoulder, elbow, wrist) - 90
            rear_arm_angle = clamp(rear_arm_angle, -5, 80)

            forearm_angle = calculate_angle(elbow, wrist, shoulder) - 90
            forearm_angle = clamp(forearm_angle, -10, 85)

            # Create and publish message
            msg = Float32MultiArray()
            msg.data = [math.radians(rear_arm_angle), math.radians(forearm_angle)]
            self.publisher_.publish(msg)

            # Log info
            self.get_logger().info(f"Published Angles: Rear = {rear_arm_angle:.2f}°, Forearm = {forearm_angle:.2f}°")

            # Draw pose skeleton
            mp_drawing.draw_landmarks(
                frame,
                results.pose_landmarks,
                mp_pose.POSE_CONNECTIONS
            )

            # Show text info
            cv2.putText(frame, f"Rear: {rear_arm_angle:.1f}°", (20, 30),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)
            cv2.putText(frame, f"Forearm: {forearm_angle:.1f}°", (20, 60),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)

        # Show frame
        cv2.imshow("Gesture Tracking", frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info("Quitting...")
            rclpy.shutdown()

    def on_shutdown(self):
        self.cap.release()
        cv2.destroyAllWindows()
        self.get_logger().info("Camera and windows released.")

def calculate_angle(a, b, c):
    a = np.array(a)
    b = np.array(b)
    c = np.array(c)
    ba = a - b
    bc = c - b
    cosine_angle = np.dot(ba, bc) / (np.linalg.norm(ba) * np.linalg.norm(bc))
    angle = np.arccos(np.clip(cosine_angle, -1.0, 1.0))
    return np.degrees(angle)

def clamp(value, min_value, max_value):
    return max(min_value, min(max_value, value))

def main(args=None):
    rclpy.init(args=args)
    node = ArmAnglePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.on_shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
