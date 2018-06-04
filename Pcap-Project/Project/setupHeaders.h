#pragma once
/**** UDP header ****/
#define udp_src_port 8080
#define udp_dst_port 8080
#define udp_h_size 8
/*******************/

/**** IPv4 header ****/
#define version 4
#define IHL 5
#define TOS 0
#define identification 0
#define FlagsAndOffset 0x4000
#define TTL 30
#define nxt_protocol 17 //UDP
/*********************/

/**** Ethernet ****/
#define preamble 0b10101010
#define SFD 0b10101011
#define np_type 0x0800 //ipv4
#define eth_h_size 14
/******************/



unsigned short ipv4_header_checksum(unsigned char * packet_data);
unsigned char * udp_header_checksum(unsigned char * packet_data, unsigned int * len);
unsigned char * setup_ethernet_header(unsigned int * len, unsigned char * packet_data, int flag);
unsigned char * setup_ipv4_header(unsigned int * len, unsigned char * packet_data, int flag);
unsigned char * setup_udp_header(unsigned int * len, unsigned char * packet_data);
unsigned char * setup_custom_header(unsigned int * len, unsigned char * packet_data, long order_number);

const unsigned char dst_mac_address[] = { 0x4C , 0x72 , 0xB9 , 0x11 , 0x63 , 0xD4 };		//Ethernet Dutja
const unsigned char dst_mac_address_wifi[] = { 0x44 , 0x6D , 0x57 , 0xEA , 0x51 , 0xD8 };	//WiFi Dutja

const unsigned char src_mac_address[] = { 0xC8 , 0x0A , 0xA9 , 0x68 , 0xA1 , 0x05 };		//Ethernet Mitzi
const unsigned char src_mac_address_wifi[] = { 0xF0 , 0x7B , 0xCB , 0x7C , 0xB3 , 0x2B };	//WiFi Mitzi

const unsigned char dst_ipv4_address[] = { 192 , 168 , 0 , 52 };	//Ethernet
const unsigned char src_ipv4_address[] = { 192 , 168 , 0 , 40 };	//Ethernet

const unsigned char dst_ipv4_address_wifi[] = { 192 , 168 , 2 , 20 };	//WiFi
const unsigned char src_ipv4_address_wifi[] = { 192 , 168 , 2 , 30 };	//WiFi

















