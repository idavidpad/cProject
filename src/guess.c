// guess.c -- 一个拖沓且的猜数字游戏
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess \n");
	printf("it.\nRespond with a y if my guess is right and with\n");
	printf("\nan n if it is wrong.\n");
	printf("uh...is your number %d?\n", guess);

	while (getchar() != 'y') {
		printf("Well, then, is it %d?\n", ++guess);
		while (getchar() != '\n') {
			continue;
		}
	}
	printf("I Knew I could do it!\n");
	return EXIT_SUCCESS;
}
