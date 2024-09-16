#include<stdio.h>

void main(){
    printf("WAP to accept the height of a person in centimeters and categorize person according to their height\n");
    // <152 short
    // >=152 && <167 average
    // >=167 tall && <=195


    float height;
    printf("Enter height: ");
    scanf("%f",&height);

    if(height < 152)
        {
            printf("You are short");
        }
    else if(height >= 152 && height < 167)
    {
        printf("Your height is average");
    }
    else if(height >= 167 && height <= 195)
    {
        printf("You are tall");
    }
    else{
        printf("Please enter valid height in cm");
    }

}
