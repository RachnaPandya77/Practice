#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    //run this for loop n time
    for(int i=0; i<n; i++)
    {
        //print (i+1) star
        for(int j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");


    }

}
