#include <stdio.h>

int main(void) {
    int no;

    printf("正整数： \n");
    scanf("%d", &no);

    while (no-- > 0) {
        putchar('*');
    }

    putchar('\n');
    return 0;
}
