//Accept 5 numbers from user and find those numbers factorials

//factorial(4) is called.
//Since 4 is not 0 or 1, the recursive case is executed.
//It becomes 4 * factorial(3).
//The function calls factorial(3).
//The process continues until factorial(1) is called, which returns 1.
//The calculations then unfold:
//factorial(2) = 2 * factorial(1) = 2 * 1 = 2
//factorial(3) = 3 * factorial(2) = 3 * 2 = 6
//factorial(4) = 4 * factorial(3) = 4 * 6 = 24
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void main() {
    int num, i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num < 0) {
            printf("Error: Factorial of a negative number is undefined.\n");
        } else {
            long long fact = factorial(num);
            printf("Factorial of %d = %lld\n", num, fact);
        }
    }


}


