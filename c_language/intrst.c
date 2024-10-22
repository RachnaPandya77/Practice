#include <stdio.h>

int main()
{
    float p, r, t, re;
    printf("Enter P:");
    scanf("%f", &p);

    printf("Enter R:");
    scanf("%f", &r);

    printf("Enter T:");
    scanf("%f", &t);

    re = (p * r * t / 100);
    printf("Result : %f", re);
    return 0;
}