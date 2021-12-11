# !bin/usr/env/ python3

import RPi.GPIO as GPIO
import time
import rclpy
from rclpy.node import Node 
from rclpy.action import ActionClient
from my_robot_interfaces.action import MoveRoboticArm
from std_msgs.msg import Int64

class RoboticArmTrigger(Node):
    def __init__(self):
        super().__init__("roboticArmTrigger")
        self.subscriber_ = self.create_subscription(
            Int64, "ultrasound_distance", self.callback_ultrasound_distance, 10)
        self._action_client = ActionClient(self, MoveRoboticArm, "moveRoboticArm")
        self.get_logger().info("Robotic Arm Trigger has been started")

    def callback_ultrasound_distance(self, msg):
        self.get_logger().info(str(msg.data))
        if (msg.data < 10):
            future = node.send_goal(True)
            rclpy.spin_until_future_complete(node, future)
    
    def send_goal(self, request):
        goal_msg = MoveRoboticArm.Goal()
        goal_msg.request = request

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)

def main(args = None):
    rclpy.init(args = args)
    node = RoboticArmTrigger()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__== "__main__":
    main() 
