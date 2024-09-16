//Write a program in C to remove characters from a string except alphabets

#include <stdio.h>


int main() {
    char str[100], new_str[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", new_str);

    return 0;
}
