#include <stdio.h>
#define MAXLINE 500

/* write a program to print all input lines that are longer than 80 charactes */

int getLines(char l[], int lim);

int main(void)
{
	char line[MAXLINE];

	while(getLines(line, MAXLINE) > 80)
	{
		printf("%s\n", line);
	}

	return 0;
}

int getLines(char l[], int lim)
{
	int c, i = 0;
	while(((c = getchar()) != EOF) && (c != '\n') && (i < lim-1))
	{
		l[i] = c;
		++i;
	}
	if(c == '\n')
	{
		l[i] = c;
		++i;
	}
	l[i] = '\0';

	return i;
}