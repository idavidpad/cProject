#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    int v[5];

    for (i = 0; i < 5; i++) {
        v[i] = i + 1;
    }

    for (i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    return EXIT_SUCCESS;
}
