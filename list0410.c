#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int no = 0;

    do {
        printf("please enter a integer: ");
        scanf("%d", &no);

        if (no <= 0) {
            puts("\a 请不要输入非正整数： ");
        }
    } while (no <= 0);

    printf("该整数逆向显示的结果是：\n");

    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("。");
    return EXIT_SUCCESS;
}
