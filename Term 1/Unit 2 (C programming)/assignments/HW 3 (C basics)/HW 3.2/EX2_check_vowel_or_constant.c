/*
 ============================================================================
 Name        : EX2_check_vowel_or_constant.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf(" enter an alphabet :");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("%c is vowel",c);
	}
	else
		{
		printf( "%c is constant",c);
		}
}
