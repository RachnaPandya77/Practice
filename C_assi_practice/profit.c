//Write a C program to calculate profit and loss on a transaction
//profit = selling_price - cost
//loss = cost - selling_price

#include<stdio.h>

void main(){
    float profit, loss, selling_price, cost;

    printf("Enter main cost: ");
    scanf("%f", &cost);

    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    profit = selling_price - cost;
    loss = cost - selling_price;

    if(selling_price > cost){
        printf("profit is: %f",profit);
    }
    else if(cost > selling_price){
        printf("loss is: %f",loss);
    }
    else{
        printf("Neither gain nor loss");
    }



}
