#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int age;
	float assets;
	char pet[30];

	scanf("%d %f", &age, &assets);
	scanf("%s", pet);

	printf("%d, %f, %s\n", age, assets, pet);
	return EXIT_SUCCESS;
}
