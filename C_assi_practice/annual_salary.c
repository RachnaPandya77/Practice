#include<stdio.h>

void main(){
    printf("Calculate person’s Annual salary\n ");

//Annual Salary = (Monthly Salary) * 12

    int a,salary;
    printf("Enter monthly salary: ");
    scanf("%d",&salary);

    a = salary * 12;

    printf("So, Annual salary is %d",a);


}
