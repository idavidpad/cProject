#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, n;

    printf("整数值：\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        printf("%d", i);
    }

    putchar('\n');

    return EXIT_SUCCESS;
}
