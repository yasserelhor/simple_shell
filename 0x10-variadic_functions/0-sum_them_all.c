#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all the parameters
 * @n: The number of parameters
 * @...: Variable number of integer arguments
 *
 * Return: The sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int b;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (b = 0; b < n; b++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
