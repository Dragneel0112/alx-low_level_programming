#include "main.h"

/**
 * swap_int - Swaps values
 * @a:Value to be swapped
 * @b: value to be swapped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
