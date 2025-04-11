#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import JointState

class JointStateMapper(Node):
    def __init__(self):
        super().__init__('angle_to_joint_publisher')
        self.subscriber = self.create_subscription(Float32MultiArray, '/detected_angles', self.callback, 10)
        self.publisher = self.create_publisher(JointState, 'joint_states', 10)
        self.joint_state = JointState()
        self.joint_state.name = [
            'magician_joint_1',
            'magician_joint_2',
            'magician_joint_3',
            'magician_joint_4',
            'magician_joint_prismatic_1'
        ]
        self.get_logger().info("JointStateMapper ready to receive angles.")

    def callback(self, msg):
        rear = msg.data[0]
        fore = msg.data[1]
        self.joint_state.header.stamp = self.get_clock().now().to_msg()
        self.joint_state.position = [0.0, rear, fore, 0.0, 0.0]
        self.publisher.publish(self.joint_state)
        self.get_logger().info(f"Published joint positions: {self.joint_state.position}")

def main(args=None):
    rclpy.init(args=args)
    node = JointStateMapper()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
