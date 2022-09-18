// Finding average of two numbers

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the numbers: \n");
    scanf("%d, %d", &a, &b);
    
    float avg = (a+b)/2;

    printf("Average of %d and %d is: %f\n", a, b, avg);

    return 0;
}