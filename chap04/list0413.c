#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("输入多少个整数： ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合计值：%d\n", sum);
    printf("平均值：%.2f\n", (double)sum / num);
    return EXIT_SUCCESS;
}
