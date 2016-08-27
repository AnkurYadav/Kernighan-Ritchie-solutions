#include <stdio.h>

/* rewrite the temperature conversion program to use a function for conversion */

#define LOWER 0
#define UPPER 300
#define STEP 20

float ftoc(float fahrenheit);

int main(void)
{
	float fahr, celcius;

    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celcius = ftoc(fahr);
        printf("%4.0f\t%6.2f\n", fahr, celcius);
        fahr = fahr + STEP;
    }

	return 0;
}

float ftoc(float f)
{
	float c;
	c = (5.0 / 9.0) * (f - 32);

	return c;
}