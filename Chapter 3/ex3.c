// Create a calculator

# include <stdio.h>

int main()
{
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d, %d", &a, &b);
    printf("1:\tSum\n2:\tDifference\n3:\tMultiplication\n4:\tQuotient\n5:\tRemainder\nEnter your choice: \n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case 2:
            printf("%d - %d = %d\n",a,b, a-b);
            break;
        case 3:
            printf("%d * %d = %d\n",a, b, a*b);
            break;
        case 4:
            printf("%d / %d, Quotient= %d\n",a,b, a/b);
            break;
        case 5:
            printf("%d / %d, Remainder= %d\n",a, b, a%b);
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}