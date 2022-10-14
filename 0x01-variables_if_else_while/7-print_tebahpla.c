#include <stdio.h>

/**
 * main - prints alphabets reverse
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
