# !bin/usr/env/ python3

import RPi.GPIO as GPIO
import time
import rclpy
from rclpy.node import Node 
from std_msgs.msg import Int64

class RoboticArmDriver(Node):
    def __init__(self):
        super().__init__("roboticArmDriver")
        self.subscriber_ = self.create_subscription(
            Int64, "ultrasound_distance", self.callback_ultrasound_distance, 10)
        self.get_logger.info("Robotic Arm Driver has been started")

    def callback_ultrasound_distance(self, msg):
        self.get_logger().info(msg.data)

def main(args = None):
    rclpy.init(args = args)
    node = RoboticArmDriver()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__== "__main__":
    main() 
