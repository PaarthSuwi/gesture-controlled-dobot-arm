import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class ArmController(Node):
    def __init__(self):
        super().__init__('arm_controller')
        self.subscription_rear_arm = self.create_subscription(
            Float32,
            'rear_arm_angle',
            self.rear_arm_angle_callback,
            10)
        self.subscription_forearm = self.create_subscription(
            Float32,
            'forearm_angle',
            self.forearm_angle_callback,
            10)
        self.rear_arm_angle = 0.0
        self.forearm_angle = 0.0

    def rear_arm_angle_callback(self, msg):
        self.rear_arm_angle = msg.data
        self.get_logger().info(f'Received rear arm angle: {msg.data}')

    def forearm_angle_callback(self, msg):
        self.forearm_angle = msg.data
        self.get_logger().info(f'Received forearm angle: {msg.data}')

    def control_logic(self):
        # Here you would add logic to send commands to the robot based on the angles
        # This could involve direct joint control, PID control, etc.
        pass

def main(args=None):
    rclpy.init(args=args)
    arm_controller = ArmController()
    rclpy.spin(arm_controller)
    arm_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
