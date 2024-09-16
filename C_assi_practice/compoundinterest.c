#include<stdio.h>

int main(){
    printf("Calculate compound interest\n");

    float a, p, rate, time, ci, n;

   printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter annual rate: ");
    scanf("%f", &rate);

    rate = rate/100;

    printf("Enter time in year: ");
    scanf("%f", &time);

    printf("Enter the number of times that interest is compounded annually: ");
    scanf("%f", &n);


    a = p * ((1 + rate / n), n * time);
    ci = a - p;

    printf("CI is : %f\n", ci);

    return 0;
}


//a = amount
//p = principal



