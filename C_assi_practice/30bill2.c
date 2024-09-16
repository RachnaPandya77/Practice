//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
//minimum bill should be of Rs. 256/-

//example
    //bill = 900 (apply charge of 18%)
    //5000 * 0.18 = 900
    //5000 + 900 =  5900


#include<stdio.h>

void main(){
    int bill,charge,final_bill;

    printf("Enter amount: ");
    scanf("%d",&bill);

    final_bill = bill + (bill * 0.18);

    if(bill < 256){
        printf("Bill = 256");
    }
    else if(bill <= 800){
        printf("bill = 800");
    }
    else{
        printf("bill is: %d",final_bill);
    }





}
