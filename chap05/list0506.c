#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for (i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    puts("_____________");

    for (i = 0; i < 5; i++) {
        printf("%4d%4d\n", a[i], b[i]);
    }
    return EXIT_SUCCESS;
}
