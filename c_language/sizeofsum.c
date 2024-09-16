//Accept 2 numbers and find out its sum check it size

#include<stdio.h>

void main(){
    int a,b,sum;

    printf("Enter first num:");
    scanf("%d",&a);

    printf("Enter second num:");
    scanf("%d",&b);

    sum = a + b;

    printf("Sum of num is: %d\n",sum);

    sizeof(sum);
    printf("size of sum is : %d",sizeof(sum));
}


