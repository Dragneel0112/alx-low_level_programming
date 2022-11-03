#include "main.h"

/**
 * _prime - determines prime number
 * @n: interger
 * @x: odd numbers
 *
 * Return: 1 if prime, 0 otherwise
 */
int _prime(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	else if (n / 2 > x)
	{
		return (_prime(n, x + 2));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - finds prime
 * @n: integer
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 3));
	}
}
