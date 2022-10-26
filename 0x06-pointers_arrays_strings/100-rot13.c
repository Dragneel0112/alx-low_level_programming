#include "main.h"

/**
 * rot13 - Encodes with rot13
 * @s: pointer for string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int x, y;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = rot[y];
				break;
			}
		}
	}
	return (s);
}
