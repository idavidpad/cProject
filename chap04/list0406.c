#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个整数： \n");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d\n", no--);
    }

    printf("\n");
    return 0;
}
