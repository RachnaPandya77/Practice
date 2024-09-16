#include<stdio.h>

void main(){


    float b,h,area;
    printf("Find area of Triangle Formula : A = 1/2 * b * h\n");

    printf("\nEnter base of triangle:");
    scanf("%f",&b);

    printf("\nEnter Height of triangle:");
    scanf("%f",&h);

    area = (b * h) / 2;

    printf("Area Of Triangle is:%.2f\n",area);


}
