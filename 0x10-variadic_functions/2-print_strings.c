#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints string
 * @separator: separator
 * @n: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;
	char *ptr;

	va_start(arg, n);

	for (x = 0; x < n; x++)
	{
		ptr = va_arg(arg, char*);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("%p", ptr);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
