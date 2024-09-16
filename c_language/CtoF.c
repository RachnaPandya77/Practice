//Celsius to Fahrenheit Conversion

#include<stdio.h>

void main(){

    float c,f;
    printf("Enter Temp in Celsius: ");
    scanf("%f",&c);

    f = (c * 9/5) + 32;

    printf("Temp in Fahrenheit is : %.2f ",f);



}
