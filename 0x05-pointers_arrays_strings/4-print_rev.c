#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: Characters of string
 */
void print_rev(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	while (x > 0)
	{
		s--;
		_putchar(*s);
		x--;
	}
	_putchar('\n');
}
