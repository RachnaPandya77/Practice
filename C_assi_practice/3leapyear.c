#include<stdio.h>

void main(){
    printf("Check if year is leap year or not\n");


    int year;

    printf("enter year:\n");
    scanf("%d",&year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("Leap year\n");
    }
    else{
        printf("not leap year\n");
    }



}
