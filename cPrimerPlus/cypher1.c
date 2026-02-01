// cypher1.c -- 更改输入， 空格不变
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SPACE ' '

int main(int argc, char* argv[]) {
	char ch;
	ch = getchar();
	while (ch != '\n') {
		if (ch == SPACE) {
			putchar(ch);
		} else {
			putchar(ch + 1);
		}
		ch = getchar();
	}
	putchar(ch);
	return EXIT_SUCCESS;
}
