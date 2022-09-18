#include <stdio.h>

int main()
{
    int a = 10, b = 5, c,d;
    c = a > 3 && b != 3;
    d = a == 10 || b > 20;
    
    printf("%d, %d\n", c, d);

    return 0;
}