#include "main.h"

/**
 * print_square - prints square in terminal
 * @size: size of square
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar(35);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
