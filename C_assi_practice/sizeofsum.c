#include <stdio.h>

void main() {
    int a,b,sum;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("\n");
    printf("Enter second number:");
    scanf("%d",&b);

    sum = a + b;
    printf("sum of two num is:%d\n",sum);

    printf("size of sum:%d", sizeof(sum));
}




