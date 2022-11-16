#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 * @array: array
 * @size: array size
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
			(*action)(array[x]);
	}
}
