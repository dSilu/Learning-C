// To calculate the real roots of the quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b, c, d, r1, r2;
	printf("Enter three numbers: \n");
	scanf("%f %f %f", &a, &b, &c);

	d = b * b - (4 * a* c);

	if (d<0){
		printf("Roots are imaginary\n");
	}
	else
	{
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		printf("The roots are %f %f\n", r1, r2);
	}
	return 0;
}
