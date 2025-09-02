/*
 * main.c
 *
 *  Created on: Sep 3, 2025
 *      Author: jayhe
 */

#include <stdint.h>

#include "uart.h"

int main(void)
{


	//ENABLE UART MODULE
	uart2_tx_init();
	while(1)
	{
		printf("Hello World \n\r");
	}



}
