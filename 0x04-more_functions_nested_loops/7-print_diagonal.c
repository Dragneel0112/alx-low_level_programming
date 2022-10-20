#include "main.h"

/**
 * print_diagonal - prints diagonal line in terminal
 * @n: number of characters to print
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
