#!/usr/bin/env python3

import rclpy 
from rclpy.None import None
import serial 

class NODE_NAME(Node): # modify name
    def __init__(self):
        super().__init__("executable_name") # modify
        self .get_logger().info("Node has been started") # modify
 
def main (args = None):
    rclpy.init(args=args)
    node = Node("py_test") # modify
    node.get_logger.info("Hello ROS2")
    rclpy,spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
