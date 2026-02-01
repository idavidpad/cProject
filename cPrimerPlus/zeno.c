#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int t_ct;
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);

    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
         t_ct++, power_of_2 *= 2) {
        time += 1.0 / power_of_2;
        printf("After %3d terms, time = %.10f\n", t_ct, time);
    }
    return EXIT_SUCCESS;
}
