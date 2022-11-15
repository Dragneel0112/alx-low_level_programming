#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: pointer
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *_ptr;

	_ptr = malloc(b);
	if (_ptr == NULL)
		exit(98);
	return (_ptr);
}
