#include<stdio.h>

void main(){
    printf("Convert temperature Fahrenheit to Celsius\n");
    //Celsius = (Fahrenheit - 32) * 5/9

    float f, c;
    printf("Enter temp in fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5/9;

    printf("Temperature in celsius:%f", c);



}

