#include <stdio.h>

int main()
{
    int a, b; // a > b

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    // find and print reminder
    // divisor * quotient + reminder = dividend

    int q = a / b;
    int r = a - b * q;
    // a           //b        //r
    printf("REminder whn %d is divided by %d is : %d", a, b, r);

    return 0;
}