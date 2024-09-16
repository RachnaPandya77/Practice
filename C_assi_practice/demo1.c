// Write a program in C to separate individual characters from a string

#include <stdio.h>

int main() {
    char str[10];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters:\n");

    for (i = 0; str[i] != '\0'; i++)//chech if char isn't equal to 0 ...if it's not 0 then loop continues
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
