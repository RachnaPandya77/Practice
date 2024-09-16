#include<stdio.h>

void main(){
    printf("Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0\n");
    printf("\n");
    int m,n;
    printf("enter integer ");
    scanf("%d",&m);

    if(m>0){  //m is greater than 0,n=1
        n=1;
    }
    else if(m==0){  //m is equal to 0,n=0
        n=0;
    }
    else{
        n=-1;  //m is less than 0,n=-1
    }
    printf("n is %d\n",n);


}
