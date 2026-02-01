#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 0; i <= no; i++) {
        printf("%d\n", i);
    }

    putchar('\n');
    return EXIT_SUCCESS;
}
