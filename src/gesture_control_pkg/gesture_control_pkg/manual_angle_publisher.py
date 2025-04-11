#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray

class ManualAnglePublisher(Node):
    def __init__(self):
        super().__init__('manual_angle_publisher')
        self.publisher = self.create_publisher(Float32MultiArray, '/detected_angles', 10)
        self.timer = self.create_timer(1.0, self.publish_angles)
        self.get_logger().info("ManualAnglePublisher is publishing every second.")

    def publish_angles(self):
        msg = Float32MultiArray()
        msg.data = [0.3, -0.4]  # [rear_arm_angle, forearm_angle]
        self.publisher.publish(msg)
        self.get_logger().info(f"Published angles: {msg.data}")

def main(args=None):
    rclpy.init(args=args)
    node = ManualAnglePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
