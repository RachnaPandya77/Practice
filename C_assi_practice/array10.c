#include<stdio.h>

void main(){
    int ary[10],i;
    printf("Enter numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&ary[i]);
    }

    printf("in reverse order\n");
    for(i=9;i>=0;i--)
    {
        printf("%d\n",ary[i]);
    }


}
