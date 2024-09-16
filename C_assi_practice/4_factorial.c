//WAP to find factorial using recursion

#include<stdio.h>

int factorial(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }

int main(){
    int num,result;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num<0){
        printf("Enter valid number");
    }
    else{
        result = factorial(num);
        printf("Factorial of %d = %d",num,result);
    }


    return 0;
}
