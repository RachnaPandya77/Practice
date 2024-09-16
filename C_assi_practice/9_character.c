//Write a program in C to find the maximum number of characters in a string


#include <stdio.h>

int main() {
    char str[100];
    int i, max_length = 0, current_length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
            }
            current_length = 0;
        }
    }


    if (current_length > max_length) {
        max_length = current_length;
    }

    printf("Maximum number of characters in a word: %d\n", max_length);

    return 0;
}
