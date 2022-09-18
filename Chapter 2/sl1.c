// From a four digit number find the sum of last and first digit

#include <stdio.h>

int main()
{
    int n, a, b;
    // Prompt the user to enter a 4 digit number
    printf("Enter a four digit number: \n");
    scanf("%d", &n);

    // find last and first digit
    a = n % 10;
    b = n/1000;

    int sum = a + b;
    printf("Sum of the first and last digits is %d\n", sum);

    return 0;
}