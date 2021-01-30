/*
 * Compute nth term of Fibonacci series
*/
#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    return fib(n - 2) + fib(n - 1);
}

int main(void) {
    int result = fib(10); 
    printf("The result is %d\n", result);

    return EXIT_SUCCESS;
}
