//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include<stdio.h>

void main(){
    int num, lastDigit, firstDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);


}



