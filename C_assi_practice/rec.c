#include<stdio.h>

void main(){

    printf("Find area of Rectangle Formula : A=wl");
    float length, width, area;

    printf("Enter area of length");
    scanf("%f", &length);
    printf("Enter area of width");
    scanf("%f", &width);

    area = length * width;

    printf("area of rectangle length %.2f and width %.2f is : %.2f \n",length, width, area);


}
