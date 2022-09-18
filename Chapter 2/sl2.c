// Find the range of a number
// i.e. 78 is in between 70 and 79, 102 is between 100 and 109.

# include <stdio.h>

int main()
{
    int n, lower_bound, upper_bound;
    printf("Enter a number: \n");
    scanf("%d", &n);
    lower_bound = n/10 * 10;    // Arithmetic operator works from left to right.
    upper_bound = lower_bound + 9;
    printf("%d is in between %d and %d\n", n, lower_bound, upper_bound);

    return 0;
}