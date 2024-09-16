//WAP of Addition, Subtraction, Multiplication and Division using Switch case
//funcation & array

#include<stdio.h>

int add(int a,int b)
    {
        return a + b;
    }
int sub(int a,int b)
    {
        return a - b;
    }
int mul(int a,int b)
    {
        return a * b;
    }
int div(int a,int b)
    {
        return a / b;
    }

int main(){
    int num1,num2,option,result;
    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("\n");

    printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. Mul\n");
    printf("4. div\n");

    printf("Choose any one: ");
    scanf("%d",&option);

    switch(option)
    {
    case 1:{
        result = add(num1,num2);
        printf("sum = %d",result);
        break;
    }
    case 2:{
        result = sub(num1,num2);
        printf("sub = %d",result);
        break;
    }
    case 3:{
        result = mul(num1,num2);
        printf("mul = %d",result);
        break;
    }
    case 4:{
        result = div(num1,num2);
        printf("div = %d",result);
        break;
    }
    default:
        printf("invalid choice");
    }


    return 0;
}

