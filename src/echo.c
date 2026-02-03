#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;
	while ((ch = getchar()) != '#') {
		putchar(ch);  // 输出字符
	}
	return EXIT_SUCCESS;
}
