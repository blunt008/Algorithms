/*
 * Find factorial of N using iteration
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int sum = 1;

    for (int i = 1; i <= n; ++i) {
        sum *= i;
    }

    return sum;
}

int main(void) {
    int sum = factorial(1);
    printf("The factorial is %d\n", sum);

    return EXIT_SUCCESS;
}
