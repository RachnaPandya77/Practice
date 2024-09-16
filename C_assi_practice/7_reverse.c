//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>

void main(){
    int n,n1,n2;
    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0){
        n2=n%10;
        n1=n1*10+n2;
        n/=10;
    }
    printf("Reversed number = %d\n", n1);


}


