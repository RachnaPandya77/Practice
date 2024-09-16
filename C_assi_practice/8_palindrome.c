//WAP to reverse a string and check that the string is palindrome or not


#include <stdio.h>


int main() {
    char str[100], rev[100];
    int i, j, len, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length of  string
    len = strlen(str);

    // Reverse  string
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';

    // Check string is a palindrome
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
