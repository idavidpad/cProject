#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int ch;
	FILE *fp;
	char fname[50];

	printf("Enter the name of the file: \n");
	scanf("%s", fname);
	fp = fopen(fname, "r");

	if (fp == NULL) {
		printf("Could not open file %s\n", fname);
		exit(1);
	}

	while ((ch = getc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);

	return EXIT_SUCCESS;
}
