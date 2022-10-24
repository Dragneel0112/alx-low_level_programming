#include "main.h"

/**
 * puts_half - Prints half the string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int x, y, z;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		y = (x / 2);
		while (str[y] != '\0')
		{
			_putchar(str[y]);
			y++;
		}
	}
	else if (x % 2 != 0)
	{
		z = ((x - 1) / 2);
		while (z < (x - 1))
		{
			_putchar(str[z + 1]);
			z++;
		}
	}
	_putchar('\n');
}
