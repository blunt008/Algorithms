/*
 * Compute nth term of (e)^x using horner rule
*/
#include <stdio.h>
#include <stdlib.h>

double e(double x, double n) {
    static double sum = 1;

    if (n == 0) {
        return 1;
    }

    sum = sum * (x / n) + 1;
    e(x, n - 1);

    return sum;
}

int main(void) {
    double result = e(2, 8); 
    printf("The result is %f\n", result);

    return EXIT_SUCCESS;
}
