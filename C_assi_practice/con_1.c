#include<stdio.h>

void main(){
    printf("Write a C program to accept two integers and check whether they are equal or not\n");

    int a,b;
    printf("Enter first integers:");
    scanf("%d",&a);
    printf("Enter second integers:");
    scanf("%d",&b);

    if(a == b){
        printf("integers are equal\n");
    }
        else{
            printf("integers are not equal\n");
        }


}
