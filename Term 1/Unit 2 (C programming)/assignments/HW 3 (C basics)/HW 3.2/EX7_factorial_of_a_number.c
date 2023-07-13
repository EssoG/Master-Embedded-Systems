/*
 ============================================================================
 Name        : EX7_factorial_of_a_number.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1){
		int x=0,factorial=1;
		printf("\nenter an integer :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&x);
		if(x>=0)
		{
			for(int i=1;i<=x;i++)
			{
				factorial*=i;
			}
		printf("\n factorial = %d\n",factorial);
		}
	    else
				{
		printf("error!! factorial of negative number doesn’t exist .");
				}

	}
}
