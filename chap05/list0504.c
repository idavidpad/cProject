#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    double x[7];

    for (i = 0; i < 7; i++) {
        x[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
        printf("x[%d] = %.1f\n", i, x[i]);
    }
    return EXIT_SUCCESS;
}
