#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array
 * @a: array name
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;

	while (n > 0)
	{
		printf("%d", a[x]);
		n--;
		x++;
		if (n != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
