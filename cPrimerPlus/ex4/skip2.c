#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int n;

	printf("Please enter three integers: \n");
	scanf("%*d %*d %d", &n);

	printf("The last integer was %d\n", n);
	return EXIT_SUCCESS;
}
