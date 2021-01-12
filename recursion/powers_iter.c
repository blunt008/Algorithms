/*
 * Find (m)^n using iteration
*/

#include <stdio.h>
#include <stdlib.h>

int power(int m, int n) {
    int sum = 1;
    for (int i = 0; i < n; ++i) {
        sum *= m;
    } 

    return sum;
}

int main(void) {
    int result = power(3, 10); 
    printf("The result is %d\n", result);

    return EXIT_SUCCESS;
}
