# !bin/usr/env/ python3

import RPi.GPIO as GPIO
import time
import rclpy
from rclpy.node import Node 
from std_msgs.msg import Int64

class UltrasoundPublisherNode(Node):
    def __init__(self):
        super().__init__("ultrasound_publisher")
        self.publisher_ = self.create_publisher(Int64, "ultrasound_distance", 10)
        GPIO.setmode(GPIO.BOARD)

        self.TRIG = 16
        self.ECHO = 18
        self.LED = 15
        self.i = 0

        GPIO.setup(self.TRIG,GPIO.OUT)
        GPIO.setup(self.ECHO,GPIO.IN)
        GPIO.setup(self.LED,GPIO.OUT)
        GPIO.setwarnings(False)

        GPIO.output(self.TRIG, False)
        GPIO.output(self.LED, False)
        print("Calibrating.....")
        time.sleep(2)
        print("Place the object......") 
        self.timer_ = self.create_timer(0.1, self.publish_distance)
        self.get_logger().info("Ultrasound signal has started")

    def publish_distance(self):
        msg = Int64()
        GPIO.output(self.TRIG, True)
        time.sleep(0.00001)
        GPIO.output(self.TRIG, False)

        while GPIO.input(self.ECHO)==0:
            pulse_start = time.time()

        while GPIO.input(self.ECHO)==1:
            pulse_end = time.time()

        pulse_duration = pulse_end - pulse_start

        distance = pulse_duration * 17150

        distance = int(round(distance+1.15, 2))

        if distance<=20 and distance>=2:
            #print ("distance: %d cm" % (distance))
            GPIO.output(self.LED, True)
            self.i=1
    
        if distance>20 and self.i==1:
            #print("place the object....")
            self.i=0
            GPIO.output(self.LED, False)
            time.sleep(.02)

        msg.data = distance
        self.publisher_.publish(msg)

def main(args = None):
    rclpy.init(args = args)
    node = UltrasoundPublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

