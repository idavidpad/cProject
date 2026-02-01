#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'

int main(int argc, char *argv[]) {
	char ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD) {
		if (ch != '"' && ch != '\'') {
			putchar(ch);
		}
		charcount++;
		int range = 0;
	}

	printf("There are %d non-quote characters.\n", charcount);

	return EXIT_SUCCESS;
}
