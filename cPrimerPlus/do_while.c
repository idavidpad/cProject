#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const int secre_code = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secre_code);

    printf("Congratulations! You are cured !\n");
    return EXIT_SUCCESS;
}
