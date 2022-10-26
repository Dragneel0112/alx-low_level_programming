#include "main.h"

/**
 * cap_string - Capitalize all words
 * @s: pointer
 *
 * Return: string capitalized
 */
char *cap_string(char *s)
{
	int x, y;
	char separators[] = " ()?!,.;\"\n\t{}";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (y = 0; separators[y] != '\0'; y++)
					if (s[x] == separators[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
						s[x + 1] = s[x + 1] - 32;
	}
	return (s);
}
