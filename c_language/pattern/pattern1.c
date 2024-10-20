/*
*****
*****
*****

no of lines = n
star in each line = m
 */

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter num of row: ");
    scanf("%d", &n);

    printf("Enter num of column: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) // outer loop -- for no of lines
    {
        for (int i = 1; i <= m; i++) // inner loop -- no of stars in each line
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}