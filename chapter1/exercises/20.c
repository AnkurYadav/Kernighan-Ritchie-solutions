#include <stdio.h>
#define TABSTOP 4

/* write a program detab that replaces tabs in input with the proper number of 
blanks to space to the next tab stop. Assume a fixed set of tab stops */

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t')
			for(int i = 0; i < TABSTOP; ++i)
				putchar(' ');
		else
			putchar(c);
	}

	return 0;
}