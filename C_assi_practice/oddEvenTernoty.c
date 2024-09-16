#include<stdio.h>

void main(){
    printf("WAP to find number is even or odd using ternary operator\n");
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("%d is %c", num, (num % 2 == 0) ? "even" : "odd");

}
