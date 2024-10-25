#include <stdio.h>
int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }

    return 0;
}
// no is divisible by 5 or not