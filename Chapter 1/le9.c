// Swap values of three numbers without using fourth variable.

#include <stdio.h>

int main()
{
    int a=2, b=3, c=5;
    printf("Before: \n\ta=%d\n\tb=%d\n\tc=%d\n", a, b, c);

    // swap 
    a = a + b;
    b = a - b;
    a = a - b;
    a = a + c;
    c = a - c;
    a = a - c;

    printf("After: \n\ta=%d\n\tb=%d\n\tc=%d\n", a, b, c);

    return 0;
}