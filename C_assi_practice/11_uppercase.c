//.Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa

#include <stdio.h>


int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        }
    }

    printf("Modified sentence: %s", str);

    return 0;
}

