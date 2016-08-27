#include <stdio.h>
#define MAXLINE 1000

/* print longest input line */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
	int len, max = 0;
	char line[MAXLINE], longest[MAXLINE];

	while((len = getlines(line, MAXLINE)) > 0)
		if(len > max)
		{
			max = len;
			copy(longest, line);
		}

	if(max > 0)
		printf("%s", longest);

	return 0;
}

int getlines(char s[], int lim)
{
	int c, i = 0;

	while(((c = getchar()) != EOF) && (c != '\n') && (i < (lim -1)))
	{
		s[i] = c;
		++i;
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i = 0;

	while((to[i] = from[i]) != '\0')
		++i;
}