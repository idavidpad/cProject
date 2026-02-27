#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;
	printf("Please enter a character.\n");
	scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);

	return EXIT_SUCCESS;
}
