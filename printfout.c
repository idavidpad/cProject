#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main(int argc, char* argv[]) {
	int cost = 7800;
	float piet = 7.28;
	int number = 7;
	printf("%d, %d\n", number, cost);
	printf("太贵了，配不上我的颜值\n");
	printf("%c%d\n", '$', 2 * cost);

	return EXIT_SUCCESS;
}
