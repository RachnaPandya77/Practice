#include<stdio.h>

void main(){
    printf("C Program to Check Uppercase or Lowercase or Digit or Special Character\n");
    //isalpha , isupper, isdigit
    char ch;

    printf("Enter a charachter ");
    scanf("%c",&ch);

    if(isalpha(ch)) {
        if (isupper(ch)) {
            printf("%c is uppercase", ch);
        } else {
            printf("%c is lowercase", ch);
        }
    }
    else {
        printf("%c is digit", ch);
    }


}
