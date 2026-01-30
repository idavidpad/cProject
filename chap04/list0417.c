#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, j;
    int height, width;

    printf("Please enter integer: ");
    scanf("%d", &height);
    for (i = 1; i < height; i++) {
        for (j = 1; j < width; j++) {
            putchar('*');
        }

        putchar('\n');
    }
    return EXIT_SUCCESS;
}
