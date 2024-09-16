#include <stdio.h>

int main() {
    printf("Find circumference of square formula : C = 4 * a\n");
    float a, c;


    printf("Enter the length of a side of the square: ");
    scanf("%f", &a);

    c = 4 * a;

    printf("The circumference of the square is: %f\n", c);

    return 0;
}
