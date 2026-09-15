#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() fucthio printed %d charracter.\n", rv);
	return EXIT_SUCCESS;
}
