// Second maximum out of 3 numbers

# include <stdio.h>

int main()
{
    int a, b, c, max, min, middle;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // find maximum 
    if (a>b && a>c)
    max = a;
    else if (b > a && b > c)
    max = b;
    else if (c > a && c > b)
    max = c;

    // find minimum
    if (a < b && a < c)
    min = a;
    else if (b < c && b < a)
    min = b;
    else if (c < a && c < b)
    min = c;

    // find middle 
    if (a != min && a != max)
    middle = a;
    else if (b != min && b != max)
    middle = b;
    else if (c != min && c != max)
    middle = c;

    printf("Second highest number: %d\n", middle);

    return 0;

}