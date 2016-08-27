#include <stdio.h>

/* write a program to print a horizontal histogram of the length of words in its input. */

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
			for(int i = 0; wordlen[i] != 0; ++i)
			{
				for(int j = 0; j < wordlen[i]; ++j)
					putchar('|');
				wordlen[i] = 0;
				putchar('\n');
			}
			nword = 0;
		}
	}
	
	return 0;
}