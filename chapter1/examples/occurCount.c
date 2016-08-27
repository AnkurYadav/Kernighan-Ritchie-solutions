#include <stdio.h>

/* count digits, whitespaces, others */

int main(void)
{
	int c, nwhite = 0, digits[10], ndigit = 0, others = 0;

	for(int i = 0; i < 10; ++i)
		digits[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else if(c >= '0' && c <= '9')
		{
			++ndigit;
			++digits[c-'0'];
		}
		else
			++others;
		if(c == '\n')
		{
			printf("whitespaces = %d, digits = %d, others = %d\n", nwhite, ndigit, others);
			printf("digits = ");
			for(int i = 0; i < 10; ++i)
				printf("%d ", digits[i]);
			printf("\n");
			nwhite = ndigit = others = 0;
		}
	}

	return 0;
}