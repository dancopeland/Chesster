#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import serial 

class MyNode(Node):
    def __init__(self):
        super().__init__("py_test")
        self.get_logger().info("Hello ROS2")
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.get_logger().info("Hello")
        ser = serial.Serial('/dev/ttyACM0', 9600, timeout = 1)
        if ser.in_waiting > 0:
            line = ser.readline().decode('utf-8').rstrip()
            print(line)
            self.get_logger().info(line)
        ser.reset_input_buffer()
        

def main(args = None):
    rclpy.init(args=args)
    node = MyNode()
    node.get_logger().info("Hello ROS2!")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
    
