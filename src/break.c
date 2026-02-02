// break.c --使用break退出循环
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float length, width;

	printf("Enter the length of the rectangle:\n");
	while (scanf("%f", &length) == 1) {
		printf("Lenght = %0.2f: \n", length);
		printf("Enter its width: \n");
		if (scanf("%f", &width) != 1) {
			break;
		}

		printf("Width = %.2f:\n", width);
		printf("Area = %0.2f: \n", length * width);
		printf("Enter the length of the rectangle:\n");
	}
	printf("Done.\n");
	return EXIT_SUCCESS;
}
