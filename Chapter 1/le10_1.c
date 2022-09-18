/* 
Find reminder without using % operator
using operator = a%b
without using operator = Dividend - (Dividend/Divisor) * Divisor  
= Dividend - quotient * Divisor
(a - a/b * b)
*/

# include <stdio.h>

int main()
{
    int D, d, r;
    
    printf("Enter the dividend: \n");
    scanf("%d", &D);
    printf("Enter the divisor: \n");
    scanf("%d", &d);

    r = D - (D/d) * d;

    printf("Remainder = %d\n", r);

    return 0;
}