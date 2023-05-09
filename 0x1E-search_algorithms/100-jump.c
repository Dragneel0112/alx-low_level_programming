#include "search_algos.h"

/**
  * jump_search - Uses jump search in a sorted array to locate value
  * @array: Pointer to an array
  * @size: Size of the array
  * @value: The value to locate
  *
  * Return: The index where value is located, else if array NULL or value
  *         not found -1
  *
  * Description: Prints a value every time it is compared in the array
  *              Jump step created from sqrt of size
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
