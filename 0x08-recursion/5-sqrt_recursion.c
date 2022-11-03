#include "main.h"

/**
 * _sqrt_recursion - sqrt n
 * @n: interger
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - sqrt
 * @n: interger
 * @x: test value
 *
 * Return: sqrt
 */
int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((x * x) > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt(n, x + 1));
}
