/*
 * Find factorial of N
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n < 0) {
        printf("Negative numbers not accepted\n");
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return factorial(n-1) * n;
    }
}

int main(void) {
    int result = factorial(5); 

    if (result == -1) {
        return EXIT_FAILURE;
    } else {
        printf("Result is %d\n", result);
        return EXIT_SUCCESS;
    }
}
