#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum = 0;

    printf("请输入两个数\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 < num2) {
        sum = num1;
        while (num1 < num2) {
            num1++;
            sum += num1;
        }
    } else {
        sum = num2;
        while (num2 < num1) {
            num2++;
            sum += num2;
        }
    }

    printf("sum is: %d\n", sum);
    return 0;
}
