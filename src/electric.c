// electric.c 计算电费
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define RATE1 0.13230  // 前 360 千瓦时的费率
#define RATE2 0.15040  // 超过 360 千瓦时的费
#define RATE3 0.30025  // 接着再使用252千瓦时的费率
#define RATE4 0.34025  // 私用超过720千瓦时的费率
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))
#define BASE3 (BASE1 + BREAK2 + RATE3 * (BREAK3 - BREAK2))
int main(int argc, char* argv[]) {
	double kwh;
	double bill;
	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + RATE2 * (kwh - BREAK1);
	else if (kwh <= BREAK3)
		bill = BASE2 + RATE3 * (kwh - BREAK2);
	else
		bill = BASE3 + RATE4 * (kwh - BREAK3);
	{
	}

	printf("The charge for %.1fkwh is $%1.2f.\n", kwh, bill);
	return EXIT_SUCCESS;
}
