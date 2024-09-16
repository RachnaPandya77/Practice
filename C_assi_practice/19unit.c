//WAP in C to calculate and print the electricity bill of a given customer.
//The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer.
//The charge are as follow :

// Unit                                     Charge/unit
//-------------------------------------------------------------
// upto 350                                 @1.20
// 350 and above but less than 600          @1.50
// 600 and above but less than 800          @1.80
// 800 and above                            @2.00
//amount = unit * 1.20


#include <stdio.h>

void main() {
    int customer, unit;
    float price;
    char name[10];


    printf("Enter Customer ID: ");
    scanf("%d", &customer);

    printf("Enter Customer Name: ");
    scanf("%s", &name);

    printf("Enter Units Consumed: ");
    scanf("%d", &unit);



    if (unit <= 350){
        price = unit * 1.20;
    }
    else if (unit <= 600) {
        price = (350 * 1.20) + ((unit - 350) * 1.50);
    } else if (unit <= 800) {
        price = (350 * 1.20) + (250 * 1.50) + ((unit - 600) * 1.80);
    } else {
        price = (350 * 1.20) + (250 * 1.50) + (200 * 1.80) + ((unit - 800) * 2.00);
    }

    printf("\nCustomer ID: %d\n", customer);
    printf("Customer Name: %s\n", name);
    printf("Units Used: %d\n", unit);
    printf("Total Amount: %f\n", price);


}
