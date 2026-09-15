#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num = 0;

    for (printf("Keep entering numbers!"); num != 6; scanf("%d", &num)) {
        printf("That's the one I want!\n");
    }
    return EXIT_SUCCESS;
}
