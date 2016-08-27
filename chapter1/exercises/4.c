#include <stdio.h>

/* write a program to print the corresponding celcius to fahrenheit table */

int main(void)
{
	for(int celc = 0; celc <= 300; celc = celc + 30)
	{
		printf("%d\t%6.2f\n", celc, (9.0/5.0 * celc) + 32);
	}
}