// Area of circle

#include <stdio.h>

int main()
{
    float radius;
    float pi = 3.14;

    printf("Radius of the circle: \n");
    scanf("%f", &radius);

    printf("Area of the circle: %f\n", pi * (radius * radius));

    return 0;
}