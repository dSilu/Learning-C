// Find out maximum of two numbers

# include <stdio.h>

int main()
{
    int a,b, max;
    // take input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {printf("%d is maximum.\n", a);}
    else if (a < b)
    {printf("%d is maximum.\n", b);}
    else
    {printf("Both are equal.\n");} 
}