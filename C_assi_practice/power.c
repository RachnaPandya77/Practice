#include<stdio.h>

void main(){

    printf("C Program to Read Integer and Print First Three Powers\n");
    //First power: x^1 = x
    //Second power: x^2 = x * x
    //Third power: x^3 = x * x * x

    int n,p;
    printf("integer:");
    scanf("%d",&n);

    p = n*n;
    printf("square:%d\n",p);

    p = n*n*n;
    printf("cube:%d\n",p);


}


