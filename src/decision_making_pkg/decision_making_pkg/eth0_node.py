import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSReliabilityPolicy

from interfaces_pkg.msg import MotionCommand  # 커스텀 메시지 import
import socket
import subprocess
import os

# sudo env "PATH=$PATH"           "PYTHONPATH=$PYTHONPATH"           "LD_LIBRARY_PATH=$LD_LIBRARY_PATH"           "AMENT_PREFIX_PATH=$AMENT_PREFIX_PATH"           ros2 run decision_making_pkg eth0_node


class Eth0Node(Node):
    def __init__(self):
        super().__init__('eth0_node')
    
        self.subscriber = self.create_subscription(
            MotionCommand,
            "topic_control_signal",  # 퍼블리시하는 토픽 이름
            self.motion_callback,
            10
        )

        # 이더넷 소켓 설정
        #try:
        #self.socket = socket.socket(socket.AF_PACKET, socket.SOCK_RAW)
        #self.socket.bind(('eth0', 0))
        #except PermissionError as e:
        #    self.get_logger().error(f"⚠️ RAW socket 권한 부족: {e}")
        #    self.socket = None

        self.dst_mac = bytes.fromhex('00 11 22 33 44 55')
        self.src_mac = bytes.fromhex('E4 5F 01 B9 DD CB')
        self.eth_type = b'\xe9\x01'

        self.get_logger().info("🚦 Subscribing to topic_control_signal with custom QoS")


    def motion_callback(self, msg):
        print("🔥 motion_callback triggered!")
        payload = f"{msg.steering},{msg.left_speed},{msg.right_speed}".encode()
        try:
            subprocess.run(
                ["./eth_sender", payload],
                check=True
            )
            self.get_logger().info(f"📤 C 송신 성공: {payload}")
        except subprocess.CalledProcessError as e:
            self.get_logger().error(f"❌ C 전송 실패: {e}")    
        #eth_frame = self.dst_mac + self.src_mac + self.eth_type + payload
        #if self.socket:
        #    try:
        #        self.socket.send(eth_frame)
        #    except Exception as e:
        #        self.get_logger().error(f"❌ 소켓 전송 실패: {e}")
        #else:
        #    self.get_logger().warn("🚫 소켓이 초기화되지 않음. 전송 생략")

        #self.get_logger().info(f"📤 Sent frame: {payload}")
        print(f"[RECV] steering={msg.steering}, left={msg.left_speed}, right={msg.right_speed}")

def main(args=None):
    rclpy.init(args=args)
    node = Eth0Node()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\nNode stopped.")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
