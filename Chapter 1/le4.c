// total seconds in a given time

#include <stdio.h>

int main()
{
    int h= 3600, m=60, H, M, S;

    printf("Enter the time: \n");
    scanf("%d, %d, %d", &H, &M, &S);

    int time = (H*h) + (M*m) + S;

    printf("Total time: %d seconds\n", time);

    return 0;
}