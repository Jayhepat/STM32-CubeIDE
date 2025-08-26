/*
 * main.c
 *
 *  Created on: Aug 26, 2025
 *      Author: jayhe
 */

// USING UNION KEYWORD INSTEAD OF STRUCT TO REDUCE SIZE //

#include<stdio.h>
#include<stdint.h>

//struct Address{
union Address{
	uint16_t shortAddr;
	uint32_t longAddr;
};
int main(){
	//struct Address addr;
	union Address addr;
	addr.shortAddr = 0XABCD;
	addr.longAddr = 0XFFFFAAAA;

	printf("Short address: %x \n",addr.shortAddr);
	fflush(stdout);
	printf("Long address:%x\n",addr.longAddr);
	fflush(stdout);
	printf("Size of Address: %u\n ", sizeof(addr));
	//fflush(stdout);
	return 0;
}

