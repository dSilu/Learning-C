// Swap two numbers without using temporary variables

#include <stdio.h>

int main()
{
    int a=3, b=5;
    printf("Before: a=%d; b=%d\n", a, b);

    // swap
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After: a=%d, b=%d\n", a, b);

    return 0;
}