#include <stdio.h>

/**
 * main - prints alphabet
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
