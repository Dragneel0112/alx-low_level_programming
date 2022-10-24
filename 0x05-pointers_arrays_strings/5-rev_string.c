#include "main.h"

/**
 * rev_string - Reverse string
 * @s: Characters to reverse
 */
void rev_string(char *s)
{
	char *x = s;
	char y[1000];
	int z = 0;

	while (*s != '\0')
	{
		y[z] = *s;
		s++;
		z++;
	}
	z = 0;

	while (s > x)
	{
		s--;
		*s = y[z];
		z++;
	}
}
