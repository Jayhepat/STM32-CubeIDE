/*
 * main.c
 *
 *  Created on: Aug 26, 2025
 *      Author: jayhe
 */
#include<stdio.h>
#include<stdint.h>
#define PI_VALUE 3.145F
#define AREA_OF_CIRCLE(r)  ((PI_VALUE)*(r)*(r))

int main(){
	float  Circle_Area;
	Circle_Area = AREA_OF_CIRCLE(2);
	printf("Area of Circle : %.2f\n", Circle_Area);
	fflush(stdout);
	return 0;
}
