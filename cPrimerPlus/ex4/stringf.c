#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define BLURB "Authentic imitation"

int main(int argc, char* argv[]) {
	printf("%2s\n", BLURB);
	printf("%42.2s\n", BLURB);
	printf("%42s\n", BLURB);
	printf("%42s\n", BLURB);
	printf("%-42s\n", BLURB);
	printf("%042d\n", 567);

	return EXIT_SUCCESS;
}
