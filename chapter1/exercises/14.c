#include <stdio.h>

/* write a program to print a histogram of frequency of diiferent characters(alphabets) present in its input */

int main(void)
{
	int c, charFreq[26];

	for(int i = 0; i< 26; ++i)
		charFreq[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c >= 'a' && c <= 'z')
			++charFreq[c - 'a'];
		else if(c >= 'A' && c <= 'Z')
			++charFreq[c - 'A'];
		if(c == '\n')
		{
			for(int i = 0; i < 26; ++i)
			{	
				printf("%c: ", ('a' + i));
				for(int j = 0; j < charFreq[i]; ++j)
					putchar('|');
				putchar('\n');
			}
			for(int i = 0; i< 26; ++i)
				charFreq[i] = 0;
		}
	}

	return 0;
}