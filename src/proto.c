// proto.c -- 使用函数原型
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int imax(int, int);

int main(int argc, char* argv[]) {
	printf("The maximum of % d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("The maximum of % d and %d is %d.\n", 3, 5, imax(3, 3));

	return EXIT_SUCCESS;
}

int imax(int n, int m) { return (n > m) ? n : m; }
