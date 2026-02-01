#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, n;

    printf("整数是: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);
        }
    }

    putchar('\n');
    return EXIT_SUCCESS;
}
