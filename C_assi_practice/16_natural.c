//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
void main(){
    int i,n,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of natural no. is %d",sum);






}
