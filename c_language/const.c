#include<stdio.h>
#define PI 3.14

void main(){
    int a = 3;
    const float b = 5.4;
   // float b = 5.55; // can not do this bcoz b is constant

    printf("value \a of a %d\n",a);
    printf("value of b %f\n",b);
//    printf("value of c %f\n",c);

   // PI = 3.33;// can not do this bcoz PI is constant
    printf("%f",PI);

    // "\a use for sound"

}
