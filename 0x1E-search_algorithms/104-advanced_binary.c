#include "search_algos.h"

/**
  * advanced_binary_recursive - Uses recursion method of binary search to
  *                             to locate value
  * @array: Pointer to an array
  * @left: The starting index of the [sub]array to search
  * @right: The ending index of the [sub]array to search
  * @value: The value to locate
  *
  * Return: Index where value if located, else if value not found or
  *			array is NULL -1
  *
  * Description: Prints the [sub]array being searched after each change
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Advanced binary search returns first instance of
  *                   located value in array
  * @array: Pointer to an array
  * @size: Size of the array
  * @value: The Value to locate
  *
  * Return: Index where value if located, else if value not found or
  *			array is NULL -1
  *
  * Description: Prints a value every time it is compared in the array
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
