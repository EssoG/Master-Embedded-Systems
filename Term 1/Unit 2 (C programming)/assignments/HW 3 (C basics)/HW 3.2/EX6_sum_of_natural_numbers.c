/*
 ============================================================================
 Name        : EX6_sum_of_natural_numbers.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=0,sum=0;
	printf("enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=0;i<=x;i++)
	{
		sum+=i;
	}
	printf(" sum : %d",sum);
}
