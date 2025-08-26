/*
 * main.h
 *
 *  Created on: Aug 26, 2025
 *      Author: jayhe
 */

#ifndef MAIN_H_
#define MAIN_H_
#include<stdint.h>
#define ADDR_REG_AHB1ENR ((RCC_AHBIENR_t*) 0X40023830)
#define ADDR_REG_GPIOC_MODE ((GPIOx_MODER_t*)0X40020800)
#define ADDR_GPIOC_ODR ((GPIOx_ODR_t*)0X40020814)
#define  ADDR_REG_GPIOA_MODE (0X40020000)
#define ADDR_GPIOA_ODR ((GPIOx_ODR_t*)0X40020014)

typedef struct
{
	uint32_t gpioa_en  :1;
	uint32_t gpiob_en  :1;
	uint32_t gpioc_en  :1;
	uint32_t gpiod_en  :1;
	uint32_t gpioe_en  :1;
	uint32_t gpiof_en  :1;
	uint32_t gpiog_en  :1;
	uint32_t gpioh_en  :1;
	uint32_t gpioi_en  :1;
	uint32_t reserved1  :3;
	uint32_t crce  :1;
	uint32_t reserved2  :3;
	uint32_t reserved3  :2;
	uint32_t bkpsram_en  :1;
	uint32_t reserved4  :1;
	uint32_t ccmdat_en  :1;
	uint32_t dma1_en  :1;
	uint32_t dma2_en  :3;
	uint32_t reserved5  :2;
	uint32_t ethmac_en  :1;
	uint32_t ethmactx_en  :1;
	uint32_t ethmacrx_en  :1;
	uint32_t ethmacrp_en  :1;
	uint32_t otghs_en  :1;
	uint32_t otghsulpi_en  :1;


}RCC_AHBIENR_t;



typedef struct
{
	uint32_t moder_0 : 2;
	uint32_t moder_1 : 2;
	uint32_t moder_2 : 2;
	uint32_t moder_3 : 2;
	uint32_t moder_4 : 2;
	uint32_t moder_5 : 2;
	uint32_t moder_6 : 2;
	uint32_t moder_7 : 2;
	uint32_t moder_8 : 2;
	uint32_t moder_9 : 2;
	uint32_t moder_10 : 2;
	uint32_t moder_11 : 2;
	uint32_t moder_12 : 2;
	uint32_t moder_13 : 2;
	uint32_t moder_14 : 2;
	uint32_t moder_15 : 2;

}GPIOx_MODER_t;

typedef struct
{
	uint32_t ODR_0_7 : 8;
	/*uint32_t ODR_1 : 1;
	uint32_t ODR_2 : 1;
	uint32_t ODR_3 : 1;
	uint32_t ODR_4 : 1;
	uint32_t ODR_5 : 1;
	uint32_t ODR_6 : 1;
	uint32_t ODR_7 : 1;	*/
	uint32_t ODR_8 : 1;

	uint32_t ODR_9 : 1;
	uint32_t ODR_10 : 1;
	uint32_t ODR_11: 1;
	uint32_t ODR_12 : 1;
	uint32_t ODR_13 : 1;
	uint32_t ODR_14: 1;
	uint32_t ODR_15  : 1;
	uint32_t RESERVED  : 16;

}GPIOx_ODR_t;


#endif /* MAIN_H_ */
