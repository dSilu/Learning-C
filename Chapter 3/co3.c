// comma operator

# include <stdio.h>
int main()
{
    int i,j,k;
    i = (j=1, k=2,3,4);
    printf("%d\n", i);
    return 0;
}