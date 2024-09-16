//simple interest for a set of value represeting principle , number of years and rate of interest

#include<stdio.h>

void main(){
    float p,r,n,si;

    printf("Enter value of P: ");//amount
    scanf("%f",&p);
    printf("Enter value of R: ");//rate of interest
    scanf("%f",&r);
    printf("Enter value of N: ");//time period in year
    scanf("%f",&n);

    si = (p*r*n) / 100;

    printf("Simple Interest is : %f",si);

}
