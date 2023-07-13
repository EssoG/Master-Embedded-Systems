/*
 ============================================================================
 Name        : EX8_simple_calc_to_add_sub_,multiply_div.c
 Author      : Islam Gamal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x, y;
	char operator;
	while(1){
		printf("\nEnter operator either + or - or * or /: ");
		fflush(stdout);
		scanf(" %c", &operator);
		switch (operator) {
		case '+':
			printf("Enter two operands: ");
			fflush(stdout);
			scanf("%f %f", &x, &y);
			printf("%f + %f = %f", x, y, x + y);
			break;
		case '-':
			printf("Enter two operands: ");
			fflush(stdout);
			scanf("%f %f", &x, &y);
			printf("%f - %f = %f", x, y, x - y);
			break;
		case '*':
			printf("Enter two operands: ");
			fflush(stdout);
			scanf("%f %f", &x, &y);
			printf("%f * %f = %f", x, y, x * y);
			break;
		case '/':
			printf("Enter two operands: ");
			fflush(stdout);
			scanf("%f %f", &x, &y);
			if (y == 0) {
				printf("Error: division by zero");
			} else {
				printf("%f / %f = %f", x, y, x / y);
			}
			break;
		default:
			printf("\nEnter correct operator");
			break;
		}
	}
}
