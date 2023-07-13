/*
 ============================================================================
 Name        : E5_Program_to_Find_ASCII_Value_of_a_.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter a character : \n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &x);
	printf("ASCII value of (%c) :%d ",x,x);

}
