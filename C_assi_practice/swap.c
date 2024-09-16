#include<stdio.h>

void main(){
    printf("Accept '2' numbers from user and swap 2 numbers with using '3'rd variable and without using '3'rd variable\n");
    printf("\n");
    printf("without using 3rd variable");
    printf("\n");
    // a=10  b=20
    // a=a+b      b=a-b        a=a-b
    // 10+20=30   30-20=10     30-10=20
    // a=30       b=10         a=20
    //a=20 b=10

    int a,b;
    printf("Enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a = %d\n",a);
    printf("After swapping b = %d",b);
    printf("\n");

    printf("----------------------------------------------------------\n");
    printf("\n");
    //a=10 b=20
    //c=a        (?)c=a(10)     c=10
    //a=b        (10)a=b(20)    a=20
    //b=c            b=c(10)    b=10
    int c,d,e;
    printf("\n");
    printf("with 3rd variable\n");

    printf("Enter c:");
    scanf("%d",&c);

     printf("Enter d:");
     scanf("%d",&d);

     e=c;
     c=d;
     d=e;

     printf("After swapping c = %d\n",c);
     printf("After swapping d = %d",d);



}
