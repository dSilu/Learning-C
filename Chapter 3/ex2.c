# include <stdio.h>

int main()
{
    float cp, sp;
    printf("Enter the buying and selling price:\n");
    scanf("%f %f", &cp, &sp);

    if (cp > sp)
    {
        printf("Rs. %.2f loss\n", cp-sp);
    }
    else if (cp == sp)
    {
        printf("No profit! No loss!\n");
    }
    else 
    {
        printf("Rs. %.2f profit\n", sp-cp);
    }
}