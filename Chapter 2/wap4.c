// Calculate gross salary of Mr. Harish

# include <stdio.h>

int main()
{
	float salary;
	float da=.4, hra = .2;

	printf("Salary amount:\n");
	scanf("%f", &salary);
	
	auto float gross = salary - (salary * da) - (salary * hra);
	printf("Your gross salary is: %.2f\n", gross);

	return 0;
}
