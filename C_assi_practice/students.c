#include<stdio.h>

int main(){
    printf("Accept number of students from user. I need to give 5 apples to each student. How many apples are required?\n");

    int student,totalapple;
    int apple=5;

    printf("\nEnter number of student:");
    scanf("%d",&student);

    totalapple = student * apple;

    printf("\nTotal apple required:%d",totalapple);

    return 0;
}
