/*
 * main.h
 *
 *  Created on: Aug 24, 2025
 *      Author: jayhe
 */

#ifndef MAIN_H_
#define MAIN_H_
#include<stdint.h>
//DECLEAR MEMBER ELEMENTS FROM DTASHEET
typedef struct{
	uint32_t GPIOa_en : 1;
	uint32_t GPIOb_en : 1;
	uint32_t GPIOc_en : 1;
	uint32_t GPIOd_en : 1;
	uint32_t GPIOe_en : 1;
	uint32_t GPIOf_en : 1;
	uint32_t GPIOg_en : 1;
	uint32_t GPIOh_en : 1;
	uint32_t GPIOi_en : 1;
	uint32_t Reserved1 : 3;
	uint32_t CRC_en   : 1;
	uint32_t Reserved2 : 3;
	uint32_t Reserved3 : 2;
	uint32_t BKPSRAM_en : 1;
	uint32_t Reserved4 : 1;
	uint32_t CCMDATARAM_en : 1;
	uint32_t DMA1_en : 1;
	uint32_t DMA2_en : 1;
	uint32_t Reserved5 : 2;
	uint32_t ETHMAC_en : 1;
	uint32_t ETHMACTX_en : 1;
	uint32_t ETHMACRX_en : 1;
	uint32_t ETHMACPTP_en : 1;
	uint32_t OTGHS_en : 1;
	uint32_t OTGHSULPI_en : 1;
	uint32_t Reserved6 : 1;

}RCC_AHBIENR_t;

typedef struct{
	////CREATE BUS FROM MODE [0:8]
	uint32_t MODER_0 : 2;
	uint32_t MODER_1 : 2;
	uint32_t MODER_2 : 2;
	uint32_t MODER_3 : 2;
	uint32_t MODER_4 : 2;
	uint32_t MODER_5 : 2;
	uint32_t MODER_6 : 2;
	uint32_t MODER_7 : 2;
	uint32_t MODER_8 : 2;
	uint32_t MODER_9 : 2;
	uint32_t MODER_10: 2;
	uint32_t MODER_11: 2;
	uint32_t MODER_12: 2;
	uint32_t MODER_13: 2;
	uint32_t MODER_14: 2;
	uint32_t MODER_15: 2;
}GPIOx_MODER_t;

typedef struct{
	uint32_t ODR_0_7 : 8;  //CREATE BUS FOR [0:7] AND 8-Bits in total.
	/*
	uint32_t ODR_0 : 1;
	uint32_t ODR_1 : 1;
	uint32_t ODR_2 : 1;
	uint32_t ODR_3 : 1;
	uint32_t ODR_4 : 1;
	uint32_t ODR_5 : 1;
	uint32_t ODR_6 : 1;
	uint32_t ODR_7 : 1;  */
	uint32_t ODR_8 : 1;
	uint32_t ODR_9 : 1;
	uint32_t ODR_10 : 1;
	uint32_t ODR_11 : 1;
	uint32_t ODR_12: 1;
	uint32_t ODR_13: 1;
	uint32_t ODR_14 : 1;
	uint32_t ODR_15: 1;
	uint32_t Reserved : 16;
}GPIOx_ODR_t;

#endif /* MAIN_H_ */
