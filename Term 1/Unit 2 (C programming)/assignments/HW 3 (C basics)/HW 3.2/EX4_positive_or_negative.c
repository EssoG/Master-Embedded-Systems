/*
 ============================================================================
 Name        : EX5_positive_or_negative.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("enter the number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x>0)
	{
		printf("%d is positive",x);
	}
	else
	{
		printf("%d is negative",x);
	}
}
