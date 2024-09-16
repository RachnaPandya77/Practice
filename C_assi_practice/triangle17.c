//Write a C program to check whether a triangle can be formed with the given
//values for the angles

//math concept -- A triangle is valid if the sum of its angles is equal to 180 degrees

#include<stdio.h>

void main(){
    float a,b,c,sum;

    printf("Enter value of angles: a: ");
    scanf("%f",&a);
    printf("Enter value of angles: b: ");
    scanf("%f",&b);
    printf("Enter value of angles: c: ");
    scanf("%f",&c);

    sum = a + b + c;

    if(sum==180){
        printf("triangle can be formed");
    }
    else{
        printf("triangle can not be formed");
    }


}

