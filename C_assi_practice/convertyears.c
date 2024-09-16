#include<stdio.h>

void main(){
    printf("Convert years into days and months\n");
    //Days = Years * 365
    //Number of months = Number of years * 12


    int year, days, months;

    printf("Enter num of year:");
    scanf("%d",&year);

    days = year * 365;
    printf("Number of days is:%d",days);
    printf("\n");
    printf("-----------------------------------------\n");

    printf("Enter num of year:");
    scanf("%d",&year);

    months = year * 12;
    printf("Number of months is:%d",months);
}

