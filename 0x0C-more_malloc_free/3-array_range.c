#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of intergers
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *_ptr, x = 0, y = min;

	if (min > max)
		return (0);

	_ptr = malloc(sizeof(int) * (max - min + 1));

	if (!_ptr)
		return (0);
	while (x <= max - min)
		_ptr[x++] = y++;

	return (_ptr);
}
