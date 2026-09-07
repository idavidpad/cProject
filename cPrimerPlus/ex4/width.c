#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define PAGES 595

int main(int argc, char* argv[]) {
	printf("*%d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%-10d*\n", PAGES);
	return EXIT_SUCCESS;
}
