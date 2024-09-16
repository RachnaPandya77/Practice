// A
// BC
// DEF
// GHIJ
// KLMNO


#include <stdio.h>

void main() {
    char ch = 'A';

    for (int i=1; i <=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}
