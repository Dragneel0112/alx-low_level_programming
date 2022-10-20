#include "main.h"

/**
 * print_triangle - prints triangle on terminal
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = size - 1 - x; y > 0; y--)
		{
			_putchar(32);
		}
		for (z = 0; z <= x; z++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
