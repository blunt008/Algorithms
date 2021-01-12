/*
 * Find (m)^n with reduced number of multiplications
*/

#include <stdio.h>
#include <stdlib.h>

int power(int m, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        return power(m*m, n/2);
    } else {
        return m * power(m*m, (n-1)/2);
    }
}

int main(void) {
    int result = power(3, 4); 
    printf("The result is %d\n", result);

    return EXIT_SUCCESS;
}
