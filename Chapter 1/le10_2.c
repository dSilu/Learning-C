/* Second program to find reminder without using module

Dividend = Divisor * Quotient + Remainder
Dividend - (Divisor * Quotient) = Remainder
*/

# include <stdio.h>

int main()
{
    int D, d, r, q;
    // Prompt the user for dividend and divisor values
    printf("Dividend: \n");
    scanf("%d", &D);
    printf("Divisor: \n");
    scanf("%d", &d);

    q = D/d; // find quotient
    r = D - (d * q); // Remainder = Dividend - (Divisor * Quotient)

    printf("Remainder: %d\n", r);

    return 0;
}