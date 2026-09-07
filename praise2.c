#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(int argc, char* argv[]) {
	char name[40];

	printf("What is your name? ");
	scanf("%s", name);
	printf("Hello, %s, %s", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		   strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and occupies %zd memory cells. \n", sizeof PRAISE);

	return EXIT_SUCCESS;
}
