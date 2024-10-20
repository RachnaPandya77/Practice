#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter row: ");
    scanf("%d", &n);

    printf("Enter column: ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}