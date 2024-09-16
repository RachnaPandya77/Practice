#include<stdio.h>

int main(){
    printf("find the area of a rectangular prism formula : A=2(wl+hl+hw)\n");

    float area, l, w, h;

    printf("Enter length of rectangular prism:");
    scanf("%f",&l);

    printf("\nEnter width of rectangular prism:");
    scanf("%f",&w);

    printf("\nEnter height of rectangular prism:");
    scanf("%f",&h);

    area = 2 * ((w * l) + (h * l) + (h * w));

    printf("\nArea of rectangular prism is: %f",area);

    return 0;

}
