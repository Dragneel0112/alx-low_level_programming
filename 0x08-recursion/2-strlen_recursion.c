#include "main.h"

/**
 * _strlen_recursion - Prints string length
 * @s: Pointer to string
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
