#include<stdio.h>

void main(){
    printf("Accept 5 expense from user and find average of expense\n");

    //average = sum/5
    int expense[5], sum, average;

    printf("Enter 5 expense:\n");

    for(int i=1; i<6; i++){
        printf("expense %d ",i);
        scanf("%d",&expense[i]);
        sum += expense[i];

    }
    printf("sum:%d\n",sum);
    average = sum/5;
    printf("average expense:%d",average);




}
