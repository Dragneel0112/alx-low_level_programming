#include "search_algos.h"
/**
  * binary_search - Uses binary search to lacate a value in a sorted array
  * @array: Pointer to an array
  * @size: Size of the array
  * @value: Value to search for
  *
  * Return: Print location where value was found, else -1
  *
  * Description: Prints the a reamaining ints in array
  * being searched after each pass
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
