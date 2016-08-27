#include <stdio.h>

/* write a program to print a inveted vertical histogram of the length of words in its input. */

#define MAXWORD 50

int main(void)
{
	int c, nword = 0, flag = 0, wordlen[MAXWORD];

	for(int i = 0; i < MAXWORD; ++i)
		wordlen[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if(flag == 1)
				++nword;
			flag = 0;
		}
		else
		{
			flag = 1;
			if(flag == 1)
				++wordlen[nword];
		}
		if(c == '\n')
		{
			int flag2;
			for(int j = 0; flag2 != nword; ++j)
			{
				flag2 = 0;
				for(int i = 0; wordlen[i] != 0; ++i)
				{
					if((wordlen[i] - j) > 0)
						printf(" _");
					else
					{
						printf("  ");
						++flag2;
					}
				}
				putchar('\n');
			}
			nword = 0;
			for(int i = 0; i < MAXWORD; ++i)
				wordlen[i] = 0;
		}
	}
	
	return 0;
}