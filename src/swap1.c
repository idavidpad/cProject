// swap1.c -- 第1个版本的交换函数
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void interchange(int u, int v);	 // 声明函数

int main(int argc, char* argv[]) {
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(x, y);	// 调用函数
	printf("Now x = %d and y = %d.\n", x, y);
	return EXIT_SUCCESS;
}

void interchange(int u, int v)	// 定义函数
{
	int temp;
	temp = u;  // 交换u和v的值
	u = v;
	v = temp;
}
