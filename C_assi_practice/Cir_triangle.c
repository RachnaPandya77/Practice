#include<stdio.h>

void main(){
    printf("Find circumference of Triangle formula : triangle = a + b + c\n");

    float a, b, c, circumference;
    printf("Enter length of side a:");
    scanf("%f",&a);

    printf("\nEnter length of side b:");
    scanf("%f",&b);

    printf("\nEnter length of side c:");
    scanf("%f",&c);

    circumference = a + b + c;
    printf("\nCircumference Of Triangle is %f",circumference);


}
