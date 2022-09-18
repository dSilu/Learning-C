// Checks if a year is leap year or not

# include <stdio.h>

int main()
{
    int year;

    printf("Year: ");
    scanf("%d", &year);

    if (year%4==0 && (year%400==0 || year%100!=0)){
        printf("Leap year\n");
    }
    else{
        printf("Not a leap year.\n");
    }
}