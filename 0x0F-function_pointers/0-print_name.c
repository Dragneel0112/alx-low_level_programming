#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: Persons name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
