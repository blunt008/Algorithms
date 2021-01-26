/*
 * Compute nth term of Fibonacci series using loops
*/
#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 2; i <= n; ++i) {
       sum = a + b; 
       a = b;
       b = sum;
    }

    return sum;
}

int main(void) {
    int result = fib(12); 
    printf("The result is %d\n", result);

    return EXIT_SUCCESS;
}
