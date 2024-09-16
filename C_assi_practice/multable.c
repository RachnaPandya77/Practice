#include<stdio.h>

void main(){

    int num;
    printf("Enter the value of multiplivation table");
    scanf("%d", &num);
    printf("Table of %d\n",num);

    for(int i=0;i<=10;i++)
        {
        printf("%d * %d = %d\n", num, i, i*num);
    }




}
