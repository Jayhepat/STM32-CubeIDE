/*
 * main.c
 *
 *  Created on: Aug 23, 2025
 *      Author: jayhe
 */
//Using struct
#include <stdint.h>
#include<stdio.h>


struct Packet{
	uint8_t crc;
	uint8_t Status;
	uint16_t Payload;
	uint8_t Bat;
	uint8_t Sensor;
	uint8_t Longaddr;
	uint8_t Shortaddr;
	uint8_t Addrmode;
};
int main(void){
	uint32_t packetData;
	printf("Enter the packet data\n");
	fflush(stdout);
	scanf("%x", &packetData);
	struct Packet frame;
	// Shift and add mask value
	frame.crc = (uint8_t) (packetData  &0X3);
	frame.Status = (uint8_t) ((packetData >> 2) &0X1);
	frame.Payload = (uint16_t) ((packetData >> 3) &0XFFF);
	frame.Bat = (uint8_t) ((packetData >> 15) &0X7);
	frame.Sensor = (uint8_t) ((packetData >> 18) &0X7);
	frame.Longaddr = (uint8_t) ((packetData >> 21) &0XFF);
	frame.Shortaddr = (uint8_t) ((packetData >> 29) &0X3);
	frame.Addrmode = (uint8_t) ((packetData >> 31) &0X3);


	printf("CRC : %x \n",  frame.crc);
	fflush(stdout);
	printf("STATUS : %x \n",  frame.Status);
	fflush(stdout);
	printf("PAYLOAD : %x \n",  frame.Payload);
	fflush(stdout);
	printf("BAT : %x \n",  frame.Bat);
	fflush(stdout);
	printf("SENSOR : %x \n",  frame.Sensor);
	fflush(stdout);
	printf("LONGADDR : %x \n",  frame.Longaddr);
	fflush(stdout);
	printf("SHORTADDR : %x \n",  frame.Shortaddr);
	fflush(stdout);
	printf("ADDRMODE : %x \n",  frame.Addrmode);
	fflush(stdout);

	printf("Size of the Packet: %u\n", sizeof(frame));
}
