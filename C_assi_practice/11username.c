//Accept 5 names from user at run time

#include<stdio.h>

void main(){
    char name[5][20];
    int i;

    printf("Enter user name\n");

    for(i=0; i<5; i++){
        printf("name %d: ",i+1);
        scanf("%s",name[i]);
    }

    printf("List of user name");
    for(i=0; i<5; i++){
        scanf("%s\n",name[i]);
    }



}
