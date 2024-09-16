//WAP to accept 5 students name and store it in array in c

#include <stdio.h>

int main() {
    char names[5][50];

    printf("Enter 5 student names:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("Student names:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
