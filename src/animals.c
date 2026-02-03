// animals.c --使用switch语句
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char ch;
	printf("Give me a letter of the alphabet, and I will give \n");
	printf("an animals name \nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");

	while ((ch = getchar()) != '#') {
		if ('\n' == ch) {
			continue;  // 忽略换行符
		}
		if (!islower(ch)) {
			switch (ch) {
				case 'a':
				case 'A':
					printf("argali, antelope\n");
					break;
				case 'b':
				case 'B':
					printf("babirusa, bear\n");
					break;
				case 'c':
				case 'C':
					printf("coati, cougar\n");
					break;
				case 'd':
				case 'D':
					printf("desman, deer\n");
					break;
				case '\n':
				case '\t':	// 忽略换行和制表符
					break;
				default:
					printf("That's a stumper!\n");
			}
		} else {
			printf("I recognize only lowercase letter.\n");
		}

		while (getchar() != '\n') {
			continue;  // 清除输入行中的其他字符
		}
		printf("Bye!\n");

		return EXIT_SUCCESS;
	}
}
