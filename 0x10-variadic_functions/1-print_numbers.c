#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: The string used to separate the numbers
 * @n: The number of integer arguments
 * @...: Variable number of integer arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list list;

	va_start(list, n);

	for (b = 0; b < n; b++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && b == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
