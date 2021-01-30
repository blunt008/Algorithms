/*
 * Find factorial of N using iteration
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
   int sum = 1; 
   for (;n > 0; n--) {
       sum *= n;
   }

   return sum;
}

int main(void) {
    int sum = factorial(4);
    printf("The factorial is %d\n", sum);

    return EXIT_SUCCESS;
}
