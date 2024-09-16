#include<stdio.h>

void main(){
    printf("Accept 5 employees name and salary and count average and total salary");
    printf("\n");


   char emp[5][10];
   int salary[5];
   int total_s, ava_s;


    for(int i=1;i<5;i++){
        printf("emp %d:",i);
        printf("Name: ");
        scanf("%s", emp[i]);

        printf("salary ");
        scanf("%d",&salary[i]);

        total_s += salary[i];
    }

        ava_s = total_s/5;

        printf("total salary %d",total_s);
        printf("avarage salary %d",ava_s);





}
