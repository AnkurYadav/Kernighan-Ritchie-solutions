#include <stdio.h>
#define MAXLN 1000
/* write a program to remove trailing blanks and tabs from each line of input,
and to delete a entirely blank lines */

int getln(char l[], int lim);
int remsp(char l[], int ln);

int main(void)
{
	char l[MAXLN];

	int ln;

	ln = getln(l, MAXLN);
	ln = remsp(l, ln);

	printf("%s.\n", l);

	return 0;
}

int getln(char l[], int lim)
{
	int i = 0, c;

	while((c = getchar()) != EOF && c != '\n' && i < lim-1)
	{
		l[i] = c;
		++i;
	}
	l[i] = '\0';

	return i;
}

int remsp(char l[], int ln)
{
	while(l[ln-1] == ' ' || l[ln-1] == '\t')
		--ln;
	
	l[ln] ='\0';

	return ln;
}