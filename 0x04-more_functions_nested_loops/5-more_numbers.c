#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		y = 0;
		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
			y++;
		}
		_putchar('\n');
	}
}
