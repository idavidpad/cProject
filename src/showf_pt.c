#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be writen %e\n", aboat, aboat);
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
	printf("%f can be writen %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	return EXIT_SUCCESS;
}
