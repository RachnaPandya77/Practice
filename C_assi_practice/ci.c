#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, CI;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period: ");
    scanf("%f", &time);

    rate = rate / 100; // Convert interest rate to decimal

    amount = principal * pow(1 + rate, time);

    CI = amount - principal;

    printf("Compound interest is: %.2f\n", CI);

    return 0;
}

