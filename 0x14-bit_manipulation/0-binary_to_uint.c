#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < 48 || b[x] > 49)
			return (0);
		num = 2 * num + (b[x] - 48);
	}
	return (num);
}
