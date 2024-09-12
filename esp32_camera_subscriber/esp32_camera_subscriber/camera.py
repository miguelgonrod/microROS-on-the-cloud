import rclpy
from rclpy.node import Node
from sensor_micro_msgs.msg import CompressedImage
import cv2
import numpy as np

class ImageViewer(Node):
    def __init__(self):
        super().__init__('image_viewer')

        # Suscripción al tema de imágenes comprimidas
        self.subscription = self.create_subscription(
            CompressedImage,
            '/image/compressed',  # Cambiar si es necesario
            self.image_callback,
            10
        )
        self.subscription  # Prevent unused variable warning
        self.get_logger().info('Image Viewer Node has started')

    def image_callback(self, msg):
        # Convertir la imagen comprimida a un formato OpenCV
        np_arr = np.frombuffer(msg.data, np.uint8)
        image_np = cv2.imdecode(np_arr, cv2.IMREAD_COLOR)

        if image_np is not None:
            image_np = cv2.flip(image_np, 0)
            
            # Mostrar la imagen en una ventana
            cv2.imshow("ESP32-CAM Image", image_np)
            cv2.waitKey(1)  # Necesario para actualizar la ventana

def main(args=None):
    rclpy.init(args=args)

    image_viewer = ImageViewer()

    try:
        rclpy.spin(image_viewer)
    except KeyboardInterrupt:
        pass

    # Destruir el nodo antes de salir
    image_viewer.destroy_node()
    rclpy.shutdown()

    # Cerrar todas las ventanas de OpenCV
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()