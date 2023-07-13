/*
 ============================================================================
 Name        : EX7_Write_Source_Code_to_Swap_Two_Numbers_without_temp_variable.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("enter value of a :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("enter value of b :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping , value of a = %f",x);
	printf("\n after swapping , value of b = %f",y);


}
