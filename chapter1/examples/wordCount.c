#include <stdio.h>

/* count lines, words and characters in input */

int main(void)
{
	int c, nl = 0, w = 0, ch = 0, flag = 0;
	while((c = getchar()) != EOF)
	{
		++ch;
		
		if(c == ' ' || c == '\t' || c == '\n')
		{
			flag = 0;
		}
		else if(flag == 0)
		{
			++w;
			flag = 1;
		}
		if(c == '\n')
		{
			++nl;
			printf("words = %d, characters = %d, newlines = %d\n", w, ch, nl);
			w = ch = 0;
		}
	}
	return 0;
}