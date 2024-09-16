//Area of circle (2PIr) and calculate volume of cylinder(pr*r*r*h)

#include<stdio.h>
void main(){
    float p = 3.14;
    float r,h,Area,Volume;

    printf("Enter radius: ");
    scanf("%f",&r);

    printf("enter height: ");
    scanf("%f",&h);

    Area = p * r * r;
    Volume = p *r * r * h;

    printf("Area of circle is : %.2f\n",Area);

    printf("Volume of cylinder : %.2f",Volume);


}
