#include "main.h"

/**
 * print_binary - converts to binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int num;

	for (x = 63; x >= 0; x--)
	{
		num = n >> x;

		if (num & 1)
		{
			_putchar(49);
			count++;
		}

		else if (count)
			_putchar(48);
	}
	if (!count)
		_putchar(48);
}
