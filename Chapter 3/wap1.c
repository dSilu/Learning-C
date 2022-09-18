// Check whether the input is odd or even

# include <stdio.h>

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i%2==0)
    {
        printf("%d is even.\n", i);
    }
    else
    {
        printf("%d is ODD.\n", i);
    }

    return 0;
}