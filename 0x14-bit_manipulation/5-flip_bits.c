#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: int to flip
 * @m: desired int
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, flip = 0;
	unsigned long int y = sizeof(unsigned long int) * 8;

	for (x = 0; x < y; x++)
	{
		if ((m & 1) != (n & 1))
			flip += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flip);
}
