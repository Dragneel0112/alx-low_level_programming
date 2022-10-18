#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @x: interger to check
 *
 * Return: last digit
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = -x;
	}
	y = x % 10;

	if (y < 0)
	{
		y = -y;
	}
	_putchar(y + '0');

	return (y);
}

