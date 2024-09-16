#include<stdio.h>

void main(){


printf("*****DATA  TYPES******");
    int a=10;
        printf("\n                     ");
        printf("\n----int data_type-----");
        printf("\nvalue of a is: %d",a);

    float a1=35.3333333;
         printf("\n                     ");
        printf("\n----float data_type-----");
        printf("\nvalue of a1 is: %f",a1);
        printf("\nvalue of a1 is: %.2f",a1); //show 2 digit after point

     float a11=3.5;
         printf("\n                     ");
        printf("\n----float data_type-----");
        printf("\nvalue of a11 is: %f",a11);  //op= 3.500000
         printf("\nvalue of a11 is: %1f",a11);  // use . to remove extra zeros
        printf("\nvalue of a11 is: %.1f",a11); //show 1 digit after point

    char a2='R';    //this is for single character
        printf("\n                     ");
        printf("\n----character data_type-----");
        printf("\nvalue of a2 is: %c",a2);

    char myname[] = "Rachna";    //this is for more than single char (string)
        printf("\n                     ");
        printf("\n----character data_type-----");
        printf("\nvalue of myname is: %s",myname);

     char myname1[] = "My Self Rachna";    //this is for sentences (string)
        printf("\n                     ");
        printf("\n----character data_type-----");
        printf("\nvalue of myname1 is: %s",myname1);

    double a3=9998888;
        printf("\n                     ");
        printf("\n----double data_type-----");
        printf("\nvalue of a3 is: %1f",a3);

    unsigned int a4=-50;
        printf("\n                     ");
        printf("\n---- unsigned int-----");
        printf("\nvalue of a4 is: %u",a4);




}
