#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define PAGES 336
#define WORDS 65618

int main(int argc, char* argv[]) {
	short num = PAGES;
	short mnum = -PAGES;

	printf("num is short and unsigned short: %hd, %hu\n", num, num);
	printf("-num is short and unsigned short: %hd, %hu\n", mnum, mnum);
	printf("num is int and char: %hd, %hu\n", num, num);
	printf("wodrs is int, short and char: %d, %hu, %c\n", WORDS, WORDS, WORDS);
	return EXIT_SUCCESS;
}
