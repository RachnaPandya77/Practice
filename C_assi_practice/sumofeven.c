#include<stdio.h>

void main(){
    int sum,i;
    for(i=2;i<100;i+=2)
    {
        sum += i;
    }
    printf("sum of even num:%d",sum);
}
