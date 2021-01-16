/*
 * Compute nth term of (e)^x
*/

#include <stdio.h>
#include <stdlib.h>

double e(double x, double n) {
    static double power = 1;
    static double factorial = 1;

    if (n == 0) {
        return 1;
    }

    double sum = e(x, n-1);

    power = power * x;
    factorial = factorial * n;

    sum += (power / factorial);

    return sum;

}

int main(void) {
    double result = e(1, 10); 
    printf("The result is %f\n", result);

    return EXIT_SUCCESS;
}
