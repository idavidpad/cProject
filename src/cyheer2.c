// cypher.c -- 替换输入的字母，非字母字符含空格保持不变。
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	char ch;
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			putchar(ch + 1);
		} else {
			putchar(ch);
		}
	}
	putchar(ch);
	return EXIT_SUCCESS;
}
