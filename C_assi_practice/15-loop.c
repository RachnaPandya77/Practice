//Calculate sum of 10 numbers using of while loop

#include<stdio.h>
void main(){
    int j,i=1,sum=0;

    while(i<=10){
        printf("Enter number %d: ",i);
        scanf("%d",&j);

        sum = j+sum;
        i++;
    }
    printf("sum of  num is %d\n",sum);
}

