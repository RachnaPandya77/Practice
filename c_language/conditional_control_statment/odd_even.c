#include <stdio.h>
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Even");
    }
    else // if(a%2 != 0)
    {
        printf("odd");
    }

    return 0;
}