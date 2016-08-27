#include <stdio.h>

int power(int n, int m);
/* test power function */

int main(void)
{
	for(int i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

int power(int n, int m)
{
	int res = 1;
	while(m > 0)
	{
		res *= n;
		--m;
	}
	return res;
}