#include<stdio.h>

void main(){

    char op;
    int a,b,result;

    printf("enter operator:(+,-,*,/)");
    scanf("%c",&op);

    printf("Enter num 1:");
    scanf("%d",&a);

    printf("Enter num 2:");
    scanf("%d",&b);

    //using switch case
    switch(op){
        case'+':
        result = a + b;
        printf("%d + %d = %d",a,b,result);
        break;
        case'-':
        result = a - b;
        printf("%d - %d = %d",a,b,result);
        break;
        case'*':
        result = a * b;
        printf("%d * %d = %d",a,b,result);
        break;
        case'/':
        result = a / b;
        printf("%d / %d = %d",a,b,result);
        break;

        default:
            printf("Invalid operator");



    }





}
