#include <stdio.h>

int main()
{
	int i = 4, j = -1, k=0, l, m, n, o;
	l = i || j;
	printf("%d||%d = %d\n", i, j, l);

	m = l||k;
	printf("%d||%d= %d\n", l, k, m);

	n = i && j;
	printf("%d && %d = %d\n", i, j, n);
	
	o = n && k;
	printf("%d && %d = %d\n", n,k,o);

	return 0;
}
