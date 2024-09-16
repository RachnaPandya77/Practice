#include<stdio.h>

void main(){
    printf("Convert kilometers into meters\n");
    //Meters = Kilometers * 1000

    float km, meter;
    printf("kilometer:");
    scanf("%f",&km);

    meter = km * 1000;
    printf("Meter:%f",meter);

}
