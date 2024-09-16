//C Program to Reverse a Number Using FOR Loop


#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, k;

    printf("Enter an integer: ");
    scanf("%d", &num);

    k = num; // Store the original number for loop condition

    for (; k != 0; k /= 10) {
        remainder = k % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
