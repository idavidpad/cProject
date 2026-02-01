#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define PARITY 2

int main(int argc, char* argv[]) {
	int index, score[SIZE];
	int sum = 0;
	float average;
	printf("Enter %d scores:\n", SIZE);

	for (index = 0; index < SIZE; index++) {
		printf("Score %d: ", index + 1);
		scanf("%d", &score[index]);
		sum += score[index];
	}

	for (index = 0; index < SIZE; index++) {
		printf("Score %d: %d\n", index + 1, score[index]);
	}
	putchar('\n');

	for (index = 0; index < SIZE; index++) {
		sum += score[index];
	}

	average = (float)sum / SIZE;
	printf("Sum = %d, Average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PARITY);
	return EXIT_SUCCESS;
}
