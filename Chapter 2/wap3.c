# include <stdio.h>

int main()
{
	int n, t, rev=0, r;
	printf("Enter a number: \n");
	scanf("%d", &n);

	t = n;
	while (t !=0)
	{
		r = t%10;
		rev = rev * 10 + r;
		t /= 10;
	}

	printf("Reverse of %d is: %d\n", n, rev);

	return 0;

}
