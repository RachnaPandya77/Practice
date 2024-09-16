#include<stdio.h>

void main(){
    printf("WAP to convert years into days and days into years\n");
    //days = Number of years * 365(Y to D)
    //years = Number of days / 365(D to Y)

    int year,days;
    printf("Enter num of years:");
    scanf("%d",&year);

    days = year*365;
    printf("Number of days is:%d",days);
    printf("\n");

    printf("------------------------------------\n");
    printf("Enter num of days:");
    scanf("%d",&days);

    year = days/365;
    printf("Number of year is:%d",year);



}
