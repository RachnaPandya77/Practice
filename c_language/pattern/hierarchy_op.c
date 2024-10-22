// BODMAS rull
//  brkt , order , div/mul, add/sub

#include <stdio.h>
int main()
{
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
    printf("%d", i);

    return 0;
}
/*
int i = 2, j = 3, k,l;
float a, b;

k = i / j * j
    2 / 3 * 3 ...d/m sathe k hoi etle lest to right solve
    0*3
k = 0

l = j / i * i
    3 / 2 * 2
    1 * 2
l = 2

a = i / j * j
    2 / 3 * 3
    0 * 3
a = 0.00

b = j / i * i
    3 / 2 * 2
    1 * 2
b = 2.00 (bcoz b is float)


*/