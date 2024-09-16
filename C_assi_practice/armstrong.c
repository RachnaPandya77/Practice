//Program of Armstrong Number in C Using For Loop & While Loop#include <stdio.h>
#include <stdio.h>

void main() {
    int num, n1, n2, n=0, sum=0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    n1 = num;

    while (n1 != 0) {
        n1/= 10;
        ++n;
    }

    n1= num;

    while (n1 != 0) {
        n2 = n1 % 10;
        sum += pow(n2, n);
        n1 /= 10;
    }

    if (sum == num)
        printf("It is an Armstrong number.\n", num);
    else
        printf("It is not an Armstrong number.\n", num);


}

