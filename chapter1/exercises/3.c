#include <stdio.h>

/* modify the temperature conversion program to print a heading above the table. */

int main(void)
{
	int farh = 0;
	printf("fahr\t  celc\n");
	for(int lower = 0; farh <= 300; farh = farh + 30)
	{
		printf("%d\t%6.2f\n", farh, (5.0/9.0) * (farh-32));
	}
	return 0;
}