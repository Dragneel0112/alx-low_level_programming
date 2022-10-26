#include "main.h"

/**
 * leet - encodes into 1337
 * @s: Pointer for string
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int x, y;
	char leets[] = "ol_ea__t";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; leets[y] != '\0'; y++)
		{
			if (s[x] == leets[y] || s[x] == (leets[y] - 32))
			{
				s[x] = y + 48;
			}
		}
	}
	return (s);
}
