#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("Enter the list of daily low temperatures.\n");
	while (scanf("%f", &temperature) == 1) {
		all_days++;
		if (temperature < FREEZING) {
			cold_days++;
		}
	}

	if (all_days != 0) {
		printf("%d days total: %.1f%% were below freezing\n", all_days,
			   ((float)cold_days / all_days) * 100.0);
	} else {
		printf("No data entered.\n");
	}
	return EXIT_SUCCESS;
}
