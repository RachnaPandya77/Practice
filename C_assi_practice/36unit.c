//Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit (50)
//For next 100 units Rs. 0.75/unit (50 to 150)
//For next 100 units Rs. 1.20/unit (150 to 250)
//For unit above 250 Rs. 1.50/unit (250 & more)
//An additional surcharge of 20% is added to the bill (amount * 0.20)

//example ....unit = 180
//unit < 50......bill = unit * 0.50 .....bill = 90
//unit <= 150......Bill = 25(50*0.50) + (Unit - 50) * 0.75
//unit <=250......Bill = 100 + (Unit - 150) * 1.20
//unit > 250.....Bill = 220 + (Unit - 250) * 1.50

#include <stdio.h>

void main() {
    float units, amount, surcharge, total_amount;

    printf("Enter the total number of units: ");
    scanf("%f", &units);

    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = 25 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        amount = 100 + (units - 150) * 1.20;
    }
    else
    {
        amount = 220 + (units - 250) * 1.50;
    }

    surcharge = amount * 0.20;
    total_amount = amount + surcharge;

    printf("charge :%f \n",surcharge);
    printf("amount :%f \n",amount);
    printf("Total Electricity Bill(total_amount = amount + charge): %f",total_amount);


}

