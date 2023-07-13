/*
 ============================================================================
 Name        : EX6_alphabet_or_not.c
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
   printf("enter a character :");
   fflush(stdin);fflush(stdout);
   scanf("%c",&c);
   if(c>='a'&& c<='z')
   {
	   printf("%c is an alphabet",c);
   }
   else
   {
	   printf("%c is not an alphabet",c);
   }
}
