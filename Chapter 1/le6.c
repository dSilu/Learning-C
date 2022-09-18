// Swap two numbers

#include <stdio.h>

int main()
{
    int a=3, b= 5;
    printf("Before: a=%d; b=%d\n", a, b);

    // swap 
    int c = a;
    a = b;
    b = c;

    printf("After: a=%d; b=%d\n", a, b);

    return 0;
}