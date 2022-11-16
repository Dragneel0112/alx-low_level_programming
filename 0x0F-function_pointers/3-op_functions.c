#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition
 * @a: int
 * @b: int
 *
 * Return: Addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction
 * @a: int
 * @b: int
 *
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication
 * @a: int
 * @b: int
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division
 * @a: int
 * @b: int
 *
 * Return: Divided int
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - modular
 * @a: int
 * @b: int
 *
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
