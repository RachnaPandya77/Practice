#include<stdio.h>

void main(){
    printf("Convert days into month:\n");
    //Months = Total Days / 30.44

    float month, days;
    printf("Enter number of days:");
    scanf("%f",&days);

    month = days/30.44;

    printf("Month:%f",month);

}
