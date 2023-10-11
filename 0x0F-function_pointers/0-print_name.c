#include "function_pointers.h"

#include <stdlib.h>

/**
 * print_name - Prints a name using a provided function, if not NULL.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as a parameter.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
