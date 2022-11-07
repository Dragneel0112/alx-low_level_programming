#include "main.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: Pointer to string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
/**
 * str_concat - concatenates 2 strings
 * @s1: string
 * @s2: string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int str1, str2;
	char *concat, *tmp;

	if (!s1)
		s1 = "";
	else
		str1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		str2 = _strlen(s2);

	concat = malloc(str1 + str2 + 1);

	if (!concat)
		return (0);

	tmp = concat;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (concat);
}
