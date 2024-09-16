// Write a C program to determine eligibility for admission to a professional
//course based on the following criteria

//Eligibility Criteria :
//(1)  Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
//(2)  Total in all three subject >=190 or
//(3)  Total in Maths and Physics >=140
//-------------example-------------------------
//(1) Input the marks obtained in Physics :65
//(2) Input the marks obtained in Chemistry :51
//(3) Input the marks obtained in Mathematics :72
//(4) Total marks of Maths, Physics and Chemistry :188
//(5) Total marks of Maths and Physics : 137
//    The candidate is not eligible.


//total = math + phy + chem
//math-phy = math + phy

#include<stdio.h>

void main(){
    int physics, chemistry, maths, total, math_phy, candidate;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Maths: ");
    scanf("%d", &maths);

    total = physics + chemistry + maths;
    math_phy = maths + physics;

    printf("Total of subject is:%d\n",total);
    printf("Total of Maths and physics is:%d\n",math_phy);

    // && true if each one is true
    if (maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190)
        {
            candidate = 1;
        }
    else if (math_phy >= 140)
        {
            candidate = 1;
        }

    if (candidate)
        {
            printf("The candidate is eligible for addmission");
        }
    else
        {
            printf("The candidate is not eligible for addmission");
        }


}
