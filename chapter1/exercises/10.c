#include <stdio.h>

/* write a program to copy its input to its output, replacing each tab by \t, 
each backspace by \b, and each backslash by \\ */

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			printf("%c%c", '\\', 't');
		}
		else if(c == '\b')
		{
			printf("%c%c", '\\', 'b');
		}
		else if(c == '\\')
		{
			printf("%c%c", '\\', '\\');
		}
		else
			putchar(c);
	}

	return 0;
}