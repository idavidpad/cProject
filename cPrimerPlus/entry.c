#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const int secre_code = 13;
    int code_entered;
    printf("To enter triskadekaphobia therapy club,\n");
    printf("please enter the secret code number: ");

    scanf("%d", &code_entered);

    while (code_entered != secre_code) {
        printf("to enter triskadekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }

    printf("Congratulations! You are cured!\n");
    return EXIT_SUCCESS;
}
