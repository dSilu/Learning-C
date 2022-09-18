// finding maximum out of four digits

# include <stdio.h>

int main()
{
    int a,b,c,d, max;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b)
    max = a;
    if (a <b)
    max = b;
    if (max < c)
    max = c;
    if (max < d)
    max = d;

    printf("%d is maximum.\n", max);
    return 0;
}