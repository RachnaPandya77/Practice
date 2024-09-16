#include<stdio.h>

void main(){
    printf("Convert minutes into seconds and hours\n");
    //Seconds = Minutes * 60
    //Hours = Minutes / 60

    int min, sec, hours;

    printf("Enter Minutes:");
    scanf("%d",&min);

    sec = min * 60;
    printf("Second:%d",sec);
    printf("\n");
    printf("-------------------------------------------\n");

    printf("Enter Minutes:");
    scanf("%d",&min);

    hours = min / 60;
    printf("hours:%d",hours);
}
