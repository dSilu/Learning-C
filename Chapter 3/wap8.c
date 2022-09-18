#include <stdio.h>

int main()
{
    int percentage;
    printf("Percentage: ");
    scanf("%d", &percentage);

    if (percentage>=90){
        printf("Grade is 'A'\n");
    }
    else if (percentage >= 70){
        printf("Grade is 'B'\n");
    }
    else if (percentage >= 50){
        printf("Grade is 'C'\n");
    }
    else {
        printf("Grade is 'F'\n");
    }
}