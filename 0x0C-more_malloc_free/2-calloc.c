#include "main.h"
#include <stdlib.h>

/**
 *  _memset - copies character
 *  @s: pointer string
 *  @b: charater
 *  @n: bytes
 *
 *  Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
/**
 * _calloc- allocates memory
 * @nmemb: number members
 * @size: bytes
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_ptr = malloc(nmemb * size);

	if (_ptr == NULL)
		return (NULL);

	_memset(_ptr, 0, (nmemb * size));
	return (_ptr);
}
