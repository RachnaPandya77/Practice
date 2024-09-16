//WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>

void main(){
    int num[5];
    printf("Enter 5 number:\n");

    for(int i=0;i<5;i++)
    {
        printf("num %d: ",i);
        scanf("%d",&num[i]);
    }
    printf("Display entered number\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }



}
