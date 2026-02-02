#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int uchida;
    int satoh;
    int sanaka;
    int hiraki;
    int masaki;
    int sum = 0;

    printf("请输入5名学生的分数。\n");
    printf("1号: \n");
    scanf("%d", &uchida);
    sum += uchida;
    printf("请输入5名学生的分数。\n");
    printf("2号: \n");
    scanf("%d", &satoh);
    sum += satoh;
    printf("请输入5名学生的分数。\n");
    printf("3号: \n");
    scanf("%d", &sanaka);
    sum += sanaka;
    printf("请输入5名学生的分数。\n");
    printf("4号: \n");
    scanf("%d", &hiraki);
    sum += hiraki;
    printf("请输入5名学生的分数。\n");
    printf("5号: \n");
    scanf("%d", &masaki);
    sum += masaki;

    printf("总分：%5d\n", sum);
    printf("平均分：%5.1f\n", (double)sum / 5);

    return EXIT_SUCCESS;
}
