#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character check
 *
 * Return: 1 if character is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
