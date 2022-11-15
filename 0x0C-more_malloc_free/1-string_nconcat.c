#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer string 1
 * @s2: pointer string 2
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *_ptr;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	if (n > y)
		n = y;

	_ptr = malloc(sizeof(char) * (x + n + 1));
	if (_ptr == NULL)
		return (0);

	for (z = 0; z < x; z++)
		_ptr[z] = s1[z];
	for (; z < (x + n); z++)
		_ptr[z] = s2[z - x];

	_ptr[z] = '\0';
	return (_ptr);
}
