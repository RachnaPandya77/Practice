#include <stdio.h>

void main() {
    float salary, rate, premium;

    printf("Calculate person's insurance premium based on salary\n");

    printf("Enter annual salary: ");
    scanf("%f", &salary);

    rate = 5.0;

    premium = (salary * rate) / 100;

    printf("Insurance premium: %.f\n", premium);


}

//salary = 5,00,000
//rate = 5%
//premium = (5,00,000 * 5) / 100
//      = 25,000
