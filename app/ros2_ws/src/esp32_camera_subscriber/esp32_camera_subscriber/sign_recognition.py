#!/usr/bin/env python3

import cv2
import numpy as np
import mediapipe as mp
import rclpy
from rclpy.node import Node
from sensor_micro_msgs.msg import CompressedImage
from std_msgs.msg import UInt8
from cv_bridge import CvBridge
from math import acos, degrees

class SignRecognizer(Node):
    def __init__(self):
        super().__init__('sign_recognizer')

        self.subscriber_ = self.create_subscription(
            CompressedImage, "/image/compressed", self.callback_image_publisher, 10
        )
        self.publisher_ = self.create_publisher(UInt8, '/choosed_option', 10)
        self.bridge = CvBridge()
        self.mp_drawing = mp.solutions.drawing_utils
        self.mp_hands = mp.solutions.hands

        self.width = 1280
        self.height = 840

        self.PIEDRA = np.array([False, False, False, False, False])
        self.PAPEL = np.array([True, True, True, True, True])
        self.TIJERAS = np.array([False, True, True, False, False])
        
        self.option = 0

    def callback_image_publisher(self, msg):
        try:
            # Convert the compressed image to a format OpenCV can work with
            np_arr = np.frombuffer(msg.data, np.uint8)
            cv_image = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)
            cv_image = cv2.resize(cv_image, (self.width, self.height))

            # Process the image with MediaPipe
            self.process_image(cv_image)

        except Exception as e:
            self.get_logger().error(f'Error processing image: {e}')

    def process_image(self, frame):
        hands_config = {
            "model_complexity": 1,
            "min_detection_confidence": 0.5,
            "min_tracking_confidence": 0.5,
            "max_num_hands": 2
        }

        with self.mp_hands.Hands(**hands_config) as hands:
            frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
            results = hands.process(frame_rgb)

            if results.multi_hand_landmarks:
                fingers = self.fingers_up_down(results)
                if not False in (fingers == self.PIEDRA):
                    self.option = 0
                elif not False in (fingers == self.PAPEL):
                    self.option = 1
                elif not False in (fingers == self.TIJERAS):
                    self.option = 2
                else:
                    self.get_logger().info('No es una posicion valida')
            else:
                self.get_logger().info('No se detecta mano')

            self.publish_option(self.option)

    def publish_option(self, option):
        msg = UInt8()
        msg.data = option
        self.publisher_.publish(msg)

    def palm_centroid(self, coordinates_list):
        coordinates = np.array(coordinates_list)
        centroid = np.mean(coordinates, axis=0)
        return int(centroid[0]), int(centroid[1])

    def fingers_up_down(self, hand_results):
        fingers = []
        for hand_landmarks in hand_results.multi_hand_landmarks:
            coordinates_thumb = []
            coordinates_palm = []
            coordinates_ft = []
            coordinates_fb = []

            for index in [1, 2, 4]:
                x = int(hand_landmarks.landmark[index].x * self.width)
                y = int(hand_landmarks.landmark[index].y * self.height)
                coordinates_thumb.append([x, y])

            for index in [0, 1, 2, 5, 9, 13, 17]:
                x = int(hand_landmarks.landmark[index].x * self.width)
                y = int(hand_landmarks.landmark[index].y * self.height)
                coordinates_palm.append([x, y])

            for index in [8, 12, 16, 20]:
                x = int(hand_landmarks.landmark[index].x * self.width)
                y = int(hand_landmarks.landmark[index].y * self.height)
                coordinates_ft.append([x, y])

            for index in [6, 10, 14, 18]:
                x = int(hand_landmarks.landmark[index].x * self.width)
                y = int(hand_landmarks.landmark[index].y * self.height)
                coordinates_fb.append([x, y])

            p1 = np.array(coordinates_thumb[0])
            p2 = np.array(coordinates_thumb[1])
            p3 = np.array(coordinates_thumb[2])
            l1 = np.linalg.norm(p2 - p3)
            l2 = np.linalg.norm(p1 - p3)
            l3 = np.linalg.norm(p1 - p2)
            to_angle = (l1**2 + l3**2 - l2**2) / (2 * l1 * l3)
            angle = degrees(acos(to_angle)) if int(to_angle) != -1 else 180
            thumb_finger = angle > 150

            nx, ny = self.palm_centroid(coordinates_palm)
            coordinates_ft = np.array(coordinates_ft)
            coordinates_fb = np.array(coordinates_fb)

            d_centrid_ft = np.linalg.norm([nx, ny] - coordinates_ft, axis=1)
            d_centrid_fb = np.linalg.norm([nx, ny] - coordinates_fb, axis=1)
            fingersTemp = d_centrid_ft - d_centrid_fb > 0

            fingers.append(np.append(thumb_finger, fingersTemp))

        fingers = np.array(fingers)
        return np.mean(fingers, axis=0) > 0.5


def main(args=None):
    rclpy.init(args=args)
    node = SignRecognizer()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
