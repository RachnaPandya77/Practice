//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>

void main(){
    int n,sum;

    printf("Enter number: ");
    scanf("%d", &n);

    sum = n * (n+1) / 2;
    printf("sum of num from 1 to %d = %d\n",n,sum);


}
