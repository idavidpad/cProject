#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaze"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);
int main(int argc, char *argv[]) {
	starbar();

	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);

	starbar();

	return EXIT_SUCCESS;
}

void starbar(void) {
	int count;

	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
	}

	putchar('\n');
}
