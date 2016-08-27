#include <stdio.h>

/* write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank */

int main(void)
{
	int c, flag = 1, b = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(flag == 1)
				putchar(c);
			flag = 0;
		}
		else
		{
			putchar(c);
			flag = 1;
		}
	}
}