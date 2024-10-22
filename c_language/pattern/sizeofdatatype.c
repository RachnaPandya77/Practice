#include <stdio.h>
int main()
{
    int a = 30 * 1000 + 2768;
    printf("%d", a);

    printf("size : %d", sizeof(a));
    return 0;
}

/*
int = 4 byte -- 32 bits
      2 power of 32 (number can be stored)

long = 8 byte -- 64 bits (for store long number)

char = 1 byte -- 8 bit
        2 power of 8(256 number can be stored)
*/