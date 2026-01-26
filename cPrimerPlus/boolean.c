// boolean.c -- 使用_bool类型的变量variable

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed \n");
    printf("(q to quit): \n");
    input_is_good = (scanf("%ld", &num) == 1);

    while (input_is_good) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): \n");
        input_is_good = (scanf("%ld", &num) == 1);
    }

    printf("Those integer sum to %ld.\n", sum);
    return 0;
}
