// Maximum out of three numbers

# include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
    max = a;
    else if (a<b)
    max = b;
    else 
    max = a;

    if (max > c){
        printf("%d is maximum.\n", max);
    }
    else if (max < c){
        printf("%d is maximum.\n", c);
    }
    else{
        printf("All the entered equal numbers are equal.\n");
    }
}