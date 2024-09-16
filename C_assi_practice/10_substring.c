//Write a program in C to extract a substring from a given string#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int start, end;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the ending index of the substring: ");
    scanf("%d", &end);

    // Check if the indices are valid
    if (start < 0 || end >= strlen(str) || start > end) {
        printf("Invalid indices.\n");
        return 1;
    }

    int j = 0;
    for (int i = start; i <= end; i++) {
        substr[j++] = str[i];
    }
    substr[j] = '\0';

    printf("Substring: %s\n", substr);

    return 0;
}
