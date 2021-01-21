/*
 * Compute nth term of (e)^x using horner rule iteratively
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double x = 2;
    double n = 5;
    double sum = 1;

    for (;n > 0; --n) {
        sum = sum * (x / n) + 1;
    }
    printf("The result is %lf\n", sum);

    return EXIT_SUCCESS;
}
