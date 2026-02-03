#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int ch;

	while ((ch = getchar()) != EOF) {
		putchar(ch);  // 输出字符
	}
	return EXIT_SUCCESS;
}
