#include<stdio.h>

void main(){
    printf("Write a program to make Simple calculator to make addition, subtraction,multiplication,division and modulo");

    int number1, number2, add, sub, mul, div;

    printf("\nEnter number 1: ");
    scanf("%d", &number1);
    printf("\nEnter number 2: ");
    scanf("%d", &number2);

    add = number1 + number2;
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;

    printf("Add= %d\n", add);
    printf("Sub= %d\n", sub);
    printf("Mul= %d\n", mul);
    printf("Div= %d\n", div);
    }
