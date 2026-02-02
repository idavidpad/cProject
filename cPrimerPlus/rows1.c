#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define COLS 10

int main(int argc, char* argv[]) {
	int row;
	char ch;

	for (row = 0; row < ROWS; row++) {
		for (ch = 'A'; ch < 'A' + COLS; ch++) {
			printf("%c ", ch);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
