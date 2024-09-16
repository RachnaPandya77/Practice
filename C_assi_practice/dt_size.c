#include<stdio.h>

void main(){
    printf("****This is an Example of size of variable****");
    printf("\n                          ");

    int a=11;
    float b=2.5;
    char c='r';
    double d=9999;

    printf("\n a=%d",sizeof(a));  //size of int is 4
    printf("\n b=%1d",sizeof(b));  //size of is 4
    printf("\n c=%1d",sizeof(c)); //size of char is 1
    printf("\n d=%1d",sizeof(d)); //size of double is 8

    //printf("\nsize of int is: %d",sizeof(int));
    //printf("\nsize of float is: %f",sizeof(float));
    //printf("\nsize of char is: %c",sizeof(char));
    //printf("\nsize of double is: %1f",sizeof(double));
}
