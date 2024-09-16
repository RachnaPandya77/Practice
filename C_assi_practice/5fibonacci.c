//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
void main(){
    int n,n1=1,n2=2,sum;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("num in series: %d- %d-",n1,n2);

        for(int i=3;i<=n;i++){
        sum = n1+n2;
        printf("%d- ",sum);
        n1=n2;
        n2=sum;
    }
    printf("\n");




}






//Each number is the sum of the two preceding numbers.
//For example, 5 is the sum of 3 and 2, and 8 is the sum of 5 and 3
