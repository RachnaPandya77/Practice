#include <stdio.h>

int main()
{
    float x = 3.33;
    int y = x;
    printf("%d\n", y);
    float z = x - y;
    printf("%.2f", z);

    return 0;
}