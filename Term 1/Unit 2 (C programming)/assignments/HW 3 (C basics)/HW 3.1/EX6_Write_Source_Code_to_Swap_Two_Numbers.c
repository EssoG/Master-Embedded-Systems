/*
 ============================================================================
 Name        : EX6_Write_Source_Code_to_Swap_Two_Numbers.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,temp;
	printf("enter value of a :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	printf("enter value of b :");
	fflush(stdin);fflush(stdout);
	scanf("%f",&y);
	temp=x;x=y;y=temp;
	printf("after swapping , value of a = %f",y);
	printf("\n after swapping , value of b = %f",x);

}

