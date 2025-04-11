#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

import cv2
import mediapipe as mp
import numpy as np
import math
import time

class ArmAnglePublisher(Node):
    def __init__(self):
        super().__init__('arm_angle_publisher')
        self.publisher_rear = self.create_publisher(Float32, 'rear_arm_angle', 10)
        self.publisher_forearm = self.create_publisher(Float32, 'forearm_angle', 10)
        
        self.pose = mp.solutions.pose.Pose()
        self.cap = cv2.VideoCapture(0)
        if not self.cap.isOpened():
            self.get_logger().error('Error: Webcam not accessible. Ensure your camera is connected properly.')

        self.last_print_time = time.time()
        self.timer = self.create_timer(1.0, self.detect_and_publish)

    def detect_and_publish(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().error('Error: Unable to read from the webcam.')
            return

        # Convert the frame to RGB
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.pose.process(rgb_frame)

        if results.pose_landmarks:
            landmarks = results.pose_landmarks.landmark
            shoulder = [landmarks[mp.solutions.pose.PoseLandmark.LEFT_SHOULDER.value].x * frame.shape[1],
                        landmarks[mp.solutions.pose.PoseLandmark.LEFT_SHOULDER.value].y * frame.shape[0]]
            elbow = [landmarks[mp.solutions.pose.PoseLandmark.LEFT_ELBOW.value].x * frame.shape[1],
                     landmarks[mp.solutions.pose.PoseLandmark.LEFT_ELBOW.value].y * frame.shape[0]]
            wrist = [landmarks[mp.solutions.pose.PoseLandmark.LEFT_WRIST.value].x * frame.shape[1],
                     landmarks[mp.solutions.pose.PoseLandmark.LEFT_WRIST.value].y * frame.shape[0]]

            # Calculate angles
            rear_arm_angle = calculate_angle(shoulder, elbow, wrist) - 90
            forearm_angle = calculate_angle(elbow, wrist, shoulder) - 90

            # Publish angles
            rear_msg = Float32()
            rear_msg.data = clamp(rear_arm_angle, -5, 80)
            self.publisher_rear.publish(rear_msg)

            forearm_msg = Float32()
            forearm_msg.data = clamp(forearm_angle, -10, 85)
            self.publisher_forearm.publish(forearm_msg)

            # Log the published angles
            self.get_logger().info(f'Published Rear Arm Angle: {rear_msg.data:.2f} degrees')
            self.get_logger().info(f'Published Forearm Angle: {forearm_msg.data:.2f} degrees')

    def on_shutdown(self):
        self.cap.release()

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
    arm_angle_publisher = ArmAnglePublisher()
    rclpy.spin(arm_angle_publisher)
    arm_angle_publisher.on_shutdown()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
