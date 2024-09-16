//WAP to print table up to given numbers

#include<stdio.h>

void main(){
    int i,num;
    printf("Enter number:");
    scanf("%d",&num);

    printf("Multiplication of %d",num);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }

}
