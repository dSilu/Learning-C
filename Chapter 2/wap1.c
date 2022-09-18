#include <stdio.h>

int main()
{
	int t, n, sum=0, r;

	printf("Enter a 3 digit number:\n");
	scanf("%d", &t);
	
	n = t;
	while (n>0)
	{
		r = n%10; // find remainder. 
		sum += r; // Add remainder to sum
		n /= 10; // reduce the n by dividing with 10
	}
	printf("Sum of digits of %d is: %d\n", t, sum);

	return 0;
}
