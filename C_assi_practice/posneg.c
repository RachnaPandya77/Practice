#include<stdio.h>

void main(){
    printf("WAP to check whether a number is negative, positive or zero\n");

    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else{
        printf("number is zero");
    }

}
