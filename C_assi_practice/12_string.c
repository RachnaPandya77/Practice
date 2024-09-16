//.Write a program in C to find the number of times a given word 'is' appears in
//the given string


#include <stdio.h>

int main() {
    char str[100], word[] = "Hello";
    int i, j, count = 0, len = strlen(word);

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == word[0]) {N
            for (j = 1; j < len && str[i + j] == word[j]; j++) {}
            if (j == len) {
                count++;
                i += j - 1;
            }
        }
    }

    printf("The word 'Hello' appears %d times in the string.\n", count);

    return 0;
}

