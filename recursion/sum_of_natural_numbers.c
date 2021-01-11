/*
 * Find and return sum of 'n' natural numbers
*/

#include <stdio.h>
#include <stdlib.h>


int sum(int n) {
    if (n < 0) {
        printf("Negative numbers not accepted\n");
        return -1;
    } else if (n == 0) {
        return 0;
    } else {
        return sum(n-1) + n;
    }
}

int main(void) {
    int result = sum(5);

    if (result == -1) {
        return EXIT_FAILURE;
    } else {
        printf("Result is %d\n", result);
        return EXIT_SUCCESS;
    }
}


