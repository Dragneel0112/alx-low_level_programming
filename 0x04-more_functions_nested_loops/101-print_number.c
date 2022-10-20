#include "main.h"

/**
 * print_number - prints number
 * @n: interger to print
 */
void print_number(int n)
{
	unsigned int x;

	x = 0;

	if (n < 0)
	{
		x = -n;
		_putchar(45);
	}
	else
	{
		x = n;
	}
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + 48);
}
