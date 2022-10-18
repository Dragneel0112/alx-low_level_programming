#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 * @a: the character to print 
 *
 * Return: On sucess 1.
 * on error, -1 is returned, and errno is set appropriately.
 *
 * Adapted from https://github.com/holbertonschool/_putchar.c.git
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
