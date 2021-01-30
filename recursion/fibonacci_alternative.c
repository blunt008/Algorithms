/*
 * Compute nth term of Fibonacci series with a help of memoization
*/
#include <stdio.h>
#include <stdlib.h>

int fib(int n, int A[]) {
    if (n <= 1) {
        A[n] = n;
        return n;
    }

    if (A[n - 2] == -1) {
       A[n - 2] = fib(n - 2, A); 
    } 
    if (A[n - 1] == -1) {
       A[n - 1] = fib(n - 1, A); 
    } 

    return A[n - 2] + A[n - 1];
}

int main(void) {
    int A[11] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int result = fib(10, A);
    printf("The result is %d\n", result);

    return EXIT_SUCCESS;
}
