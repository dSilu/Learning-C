// Pension calculator

# include <stdio.h>

int main()
{
    int age, gender, pension;
    printf("Gender of the person \n\t1. Male \n\t2. Female): \n");
    scanf("%d", &gender);
    printf("Age of the person: ");
    scanf("%d", &age);

    switch (gender)
    {
    case 1:
        if (age >= 90){
            printf("Your pension amount is Rs. %d", 4000);
        }
        else if (age >= 60){
            printf("Your pension amount is Rs. %d", 6000);
        }
        else {
            printf("Sorry, You are not eligible for pension.\n");
        }
    
    case 2:
        if (age >=90){
            printf("Your pension amount is Rs. %d\n", 3000);
        }
        else if (age>=60){
            printf("Your pension amount is Rs. %d\n", 5000);
        }
        else{
            printf("Sorry, You are not eligible for pension.\n");
        }

    }

    return 0;
}