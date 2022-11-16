#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - finds an int
 * @array: array
 * @size: array size
 * @cmp: pointer to compare function
 *
 * Return: firt element if cmp not 0
 * if no element matches and size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
