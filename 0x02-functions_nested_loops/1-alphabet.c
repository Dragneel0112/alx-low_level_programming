#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 * Return: 0 Always success
 */
void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

