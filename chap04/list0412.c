#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, no;

    printf("正整数: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        putchar('*');
    }

    putchar('\n');

    return EXIT_SUCCESS;
}
