#include <stdio.h>

/**
 * main - prints numbers
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
