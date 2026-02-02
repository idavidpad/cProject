#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
double power(double n, int p);

int main(int argc, char* argv[]) {
	double x;
	double xpow;
	int exp;
	printf("Enter a number and an integer power: ");
	printf(" to which\nthe number will be raised. Enter q to quit.\n");

	while (scanf("%lf %d", &x, &exp) == 2) {
		xpow = power(x, exp);
		printf("%.3g to the power of %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}

	printf("Hope you enjoyed this power trip -- bye!\n");

	return EXIT_SUCCESS;
}

double power(double n, int p) {
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++) {
		pow *= n;
	}
	return pow;
}
