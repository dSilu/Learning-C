#include <stdio.h>

int main()
{
	int i = 1, z = 12;
	int eval = (i=0||z>50);
	printf("%d = 0|| %d > 50 = %d",i, z, eval);
	printf("\n");

	return 0;
} 
