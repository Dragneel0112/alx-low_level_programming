#include "main.h"

/**
 * print_most_numbers - prints most numbers
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
