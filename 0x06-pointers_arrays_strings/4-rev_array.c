#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		x++;
		y--;
	}
}
