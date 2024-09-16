#include<stdio.h>

void main(){
    printf("Accept marks from user and check pass or fail\n");

    int mark;
    printf("Enter your marks: ");
    scanf("%d",&mark);

    if(mark>=25)
    {
        printf("you are pass");
    }
    else{
        printf("you are fail");
    }


}
