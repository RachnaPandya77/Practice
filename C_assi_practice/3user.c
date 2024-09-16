//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include <stdio.h>

void main() {
    int numbers[10];
    int even, odd;
    int even_sum, odd_sum;


    printf("Enter 10 numbers:\n");

    for (int i = 1; i < 10; i++)
        {
        printf("Num %d: ", i);
        scanf("%d", &numbers[i]);


        if (numbers[i] % 2 == 0) {
            even++;
            even_sum += numbers[i];
        } else {
            odd++;
            odd_sum += numbers[i];
        }
    }


    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);


}
