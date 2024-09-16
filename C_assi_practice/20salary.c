#include<stdio.h>

//i = 0.1*s
//l = 0.1*s
//rs = s - i - l

void main(){
    printf("Accept monthly salary from the user and deduct '10%' insurance premium, '10%' loan installment find out of remaining salary\n");

    float salary , insurance, loan, rs;

    printf("Enter salary:");
    scanf("%f",&salary);

    insurance = 0.1 * salary;
    loan = 0.1 * salary;
    rs = salary - insurance - loan;

    printf("insurance:%f\n",insurance);
    printf("loan:%f\n",loan);
    printf("rs:%f\n",rs);

}
