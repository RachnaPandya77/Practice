#include<stdio.h>

void main(){
    printf("WAP to calculate swap 2 numbers with using of multiplication and division\n");
    printf("\n");
    printf("without using 3rd variable");
    printf("\n");
    // a=10  b=20
    // a=a*b       b=a/b          a=a/b
    // 10*20=200   200/20=10      200/10=20
    // a=200       b=10           a=20
    //a=20 b=10

    int a,b;
    printf("Enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("After swapping a = %d\n",a);
    printf("After swapping b = %d",b);
}
