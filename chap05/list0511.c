#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define NUMBER 5

int main(int argc, char *argv[]) {
    int i;
    int tensu[NUMBER];
    int max, min;

    printf("请输入%2d名学生的分数。\n:", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%2d号: ", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];

    for (i = 1; i < NUMBER; i++) {
        if (tensu[i] > max) {
            max = tensu[i];
        }
        if (tensu[i] < min) {
            min = tensu[i];
        }
    }

    printf("最高分: %d\n", max);
    printf("最低分: %d\n", min);

    return EXIT_SUCCESS;
}
