#include <stdio.h>

/**
 * main - prints largest prime of number
 *
 * Return: 0 Always success
 */
int main(void)
{
	long int x, y;

	x = 612852475143;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
