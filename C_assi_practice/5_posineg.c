#include<stdio.h>

void main(){
    printf("Check Number Is Positive or Negative\n");

    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    if(num>0){
        printf("num is positive");
    }
    else if(num<0){
        printf("num is negative");
    }
    else{
        printf("num is zero");
    }



}
