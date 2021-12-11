import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from my_robot_interfaces.action import MoveRoboticArm

class RoboticArmDriver(Node):
    def __init__(self):
        super().__init__("robotic_arm_action_server")
        self._action_server = ActionServer(
            self, 
            MoveRoboticArm,
            "moveRoboticArm",
            self.execute_callback)

        def execute_callback(self, goal_handle):
            self.get_logger().info("Moving the robotic arm!")
            result = MoveRoboticArm.result()
            return result

def main(args = None):
    rclpy.init(args=args)
    node = RoboticArmDriver()
    rclpy.spin(node)

if __name__ == '__main__':
    main()