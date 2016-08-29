#include <stdio.h>
#define TABSTOP 4
#define MAXLN 1000

/* write a program entab that replaces strings of blanks by the minimum number of
tabs and blanks to achieve the same spacing. */

int getln(char s[], int lim);
int entab(char s[], char entb[], int ln);

int main(void)
{
	char s[MAXLN], entb[MAXLN];
	int ln = 0, ln2 = 0;

	ln = getln(s, MAXLN);
	ln2 = entab(s, entb, ln);
	printf("%s\n", entb);
	printf("previous length = %d, current length = %d\n", ln, ln2);


	return 0;
}

int getln(char s[], int lim)
{
	int c, i = 0;

	while(((c = getchar()) != EOF) && (c != '\n') && (i < (lim -1)))
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';

	return i;
}

int entab(char s[], char entb[], int ln)
{
	int i = 0,l = 0, spCount = 0, tb = 0, sp = 0;

	while(i < ln)
	{
		if(s[i] == ' ')
		{
			for(int j = i; s[j] == ' '; ++j)
				++spCount;

			while(spCount)
			{
				if(spCount >= TABSTOP)
				{
					entb[l] = '\t';
					i = i + TABSTOP;
					++l;
					spCount -= TABSTOP;
				}
				else
				{
					entb[l] = s[i];
					++i;
					++l;
					--spCount;
				}
			}
		}
		else
		{
			entb[l] = s[i];
			++i;
			++l;
		}
	}
	entb[l] ='\0';

	return l;
}