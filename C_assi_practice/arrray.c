#include<stdio.h>

 void main(){

    int num1,num2;
    int sum,sub,mul,div;

    printf("num1\n");
    scanf("%d",&num1);
    printf("num2\n");
    scanf("%d",&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("\nsum=%d",sum);
    printf("\nsub=%d",sub);
    printf("\nmul=%d",mul);
    printf("\ndiv=%d",div);
 }
