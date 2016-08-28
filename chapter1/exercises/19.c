#include <stdio.h>
#define MAXLN 1000

/* write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time */

int getln(char s[], int lim);
void reverse(char s[], char rev[], int ln);

int main(void)
{
	char s[MAXLN], rev[MAXLN];
	int ln = 0;

	ln = getln(s, MAXLN);
	reverse(s, rev, ln);

	printf("%s\n", rev);

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

void reverse(char s[], char rev[], int ln)
{
	int i = 0;
	while(i < ln)
	{
		rev[i] = s[ln - 1 - i];
		++i;
	}
	rev[ln] = '\0';
}