/*
1234
1234
1234
*/

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter rows: ");
    scanf("%d", &n);

    printf("Enter column: ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) // for rows
    {
        for (int j = 1; j <= m; j++) // 1 2 3 4......
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}