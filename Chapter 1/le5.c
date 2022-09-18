// temp. from Fahrenheit to Centigrade

#include <stdio.h>

int main()
{
    float f;
    printf("Enter the temperature: \n");
    scanf("%f", &f);

    float c = (f - 32) * (5/9);
    printf("%f F = %f °C\n", f, c);

    return 0;
}