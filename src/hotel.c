// hotel.c -- 酒店管理函数
#include "../include/hotel.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int menu(void) {
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1)    Fairfield Arms        2) Hotel Olympic\n");
	printf("3)    Chertworthy Plaza     4) Stockton\n");
	printf("5) quit\n");

	printf("%s%s\n", STARS, STARS);
	while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
		if (status != 1) {
			scanf("%*s");
			printf("Please enter a number from 1 to 5.\n");
		}
	}

	return code;
}

int getnights(void) {
	int nights;
	while (scanf("%d", &nights) != 1) {
		scanf("%*s");
		printf("Please enter a valid number of nights: ");
	}

	return nights;
}

void showprice(double rate, int nights) {
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT) {
		total += rate * factor;
	}
	printf("The total cost will be $%0.2f.\n", total);
}
