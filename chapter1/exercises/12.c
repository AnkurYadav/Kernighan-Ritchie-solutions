#include <stdio.h>

/* write a program that print its input one word at a time */

int main(void)
{
	int c, flag = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if(flag == 1)
				printf("\n");
			
			flag = 0;
		}
		else
		{
			flag = 1;
			putchar(c);
		}
	}

	return 0;	
}