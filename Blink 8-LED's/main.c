

#include <stdint.h>

void delay(void){
	for(volatile uint32_t i=0; i<300000; i++);
}

int main(void)
{
	uint32_t *portcAHB1ENR = (uint32_t*)0X40022330;
	uint32_t *portcMODER = (uint32_t*)0X40020800;
	uint32_t *portcODR = (uint32_t*)0X40020814;

	//*portcAHB1ENR |= 0X04;

	*portcAHB1ENR |= (1<<2);
	*portcMODER &= 0XFFFF0000;
	*portcODR |= 0X00005555;

	while(1){
		*portcODR  |= 0X01;
		delay();
		for(uint32_t i=0; i<=7; i++){
			*portcODR = (*portcODR >> 1);
		delay();
		}
	}



}
