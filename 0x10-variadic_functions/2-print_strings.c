#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a separator
 * @separator: The string used to separate the strings
 * @n: The number of string arguments
 * @...: Variable number of string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	char *s;

	va_list list;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		s = va_arg(list, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && b == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_end(list);
}
