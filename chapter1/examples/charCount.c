#include <stdio.h>

/* count character in input */

int main(void)
{
	double nc = 0;

	while(getchar() != EOF)
	{
		nc++;
		printf("%.0f\n", nc);
	}
	
	return 0;
}