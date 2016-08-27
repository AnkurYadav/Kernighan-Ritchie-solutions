#include <stdio.h>

/* write a program to count blanks, tabs and newlines */

int main(void)
{
	int c, b = 0, t = 0, nl = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			++b;
		if(c == '\t')
			++t;
		if(c == '\n')
		{
			++nl;
			printf("blanks = %d, tabs = %d, newlines = %d\n", b, t, nl);
			b = 0;
			t = 0;
		}
	}
	return 0;
}