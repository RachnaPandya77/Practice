#include<stdio.h>

void main(){
    int i,j;
    printf("Enter numbers:\n");
    for (i=1;i<=10;i++)
        {
        scanf("%d", &j);
        printf("after adding two =%d: %d\n", i, j + 2);
        }

}
