// swap three numbers

#include <stdio.h>

int main()
{
    int a=2, b=3, c=4, d;

    printf("After: \n\ta=%d\n\tb=%d\n\tc=%d\n", a, b, c);
    
    d = a;
    a = b;
    b = c;
    c = d;

    printf("After: \n\ta=%d\n\tb=%d\n\tc=%d\n", a, b, c);

    return 0;
}