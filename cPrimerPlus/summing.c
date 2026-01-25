// summing.c -- 根据用户键入的整数求和

#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an interger to be summed \n");
    printf("(q to quit): \n");
    status = scanf("%ld", &num);
    printf("%d\n", status);
    while (status == 1) {

        sum = sum + num;
        printf("Please enter next integer (q to quit): \n");
        status = scanf("%ld", &num);

        printf("Those integers sum to %ld.\n", sum);
        return 0;
    }
}
