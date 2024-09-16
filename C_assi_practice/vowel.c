#include<stdio.h>

void main(){
    printf("Find the Character Is Vowel or Not\n");

    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("char is vowel");
    }
    else{
        printf("char is consonant");
    }
}
