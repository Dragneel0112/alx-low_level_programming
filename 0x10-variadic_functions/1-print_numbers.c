#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;

	va_start(arg, n);
	if (n != 0)
	{
		for (x = 0; x < n - 1; x++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(arg, int), separator);
			}
			else
			{
				printf("%d", va_arg(arg, int));
			}
		}
		printf("%d", va_arg(arg, int));
		va_end(arg);
	}
	printf("\n");
}
