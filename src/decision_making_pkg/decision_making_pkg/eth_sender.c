// eth_sender.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/ethernet.h>
#include <net/if.h>
#include <sys/ioctl.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "사용법: %s 'steering,left,right'\n", argv[0]);
        return 1;
    }

    char *payload_str = argv[1];
    unsigned char dst_mac[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};
    unsigned char src_mac[6] = {0xE4, 0x5F, 0x01, 0xB9, 0xDD, 0xCB};
    unsigned short eth_type = 0xe901;
    unsigned char frame[1500];

    int sockfd;
    struct ifreq if_idx;
    struct sockaddr_ll socket_address;

    sockfd = socket(AF_PACKET, SOCK_RAW, htons(eth_type));
    if (sockfd == -1) {
        perror("socket");
        return 1;
    }

    memset(&if_idx, 0, sizeof(struct ifreq));
    strncpy(if_idx.ifr_name, "eth0", IFNAMSIZ - 1);
    if (ioctl(sockfd, SIOCGIFINDEX, &if_idx) < 0) {
        perror("SIOCGIFINDEX");
        return 1;
    }

    memcpy(frame, dst_mac, 6);
    memcpy(frame + 6, src_mac, 6);
    frame[12] = (eth_type >> 8) & 0xFF;
    frame[13] = eth_type & 0xFF;

    int payload_len = strlen(payload_str);
    memcpy(frame + 14, payload_str, payload_len);

    memset(&socket_address, 0, sizeof(struct sockaddr_ll));
    socket_address.sll_ifindex = if_idx.ifr_ifindex;
    socket_address.sll_halen = ETH_ALEN;
    memcpy(socket_address.sll_addr, dst_mac, 6);

    if (sendto(sockfd, frame, 14 + payload_len, 0,
               (struct sockaddr*)&socket_address, sizeof(struct sockaddr_ll)) < 0) {
        perror("sendto");
        return 1;
    }

    printf("📤 전송 성공: %s\n", payload_str);
    close(sockfd);
    return 0;
}
