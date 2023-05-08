#include "search_algos.h"
/**
  * linear_search - Uses linear search to find a value in an array
  * @array: Pointer to array of ints
  * @size: Size of the array
  * @value: Specific int to search for
  *
  * Return: Index where the value is located, else -1
  *
  * Description: Prints all values compared to until search complete
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
