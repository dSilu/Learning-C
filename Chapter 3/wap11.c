// Palindrome (magic number) checker

# include <stdio.h>

int main()
{
    int n, t, reverse_n=0, r;
    printf("Enter a three digit number: ");
    scanf("%d", &t);

    n=t;
    while (n > 0){
        r = n%10;
        reverse_n = (reverse_n * 10) + r;
        n /= 10;
    }
    printf("Reverse number is : %d\n", reverse_n);

    if (t == reverse_n){
        printf("The number is a magic number.\n");
    }
    else {
        printf("The number is not a magic number.\n");
    }

    return 0;
}