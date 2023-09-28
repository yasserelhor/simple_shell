#include "main.h"

/**
 * factorial - Calculates the
 * factorial of a non-negative integer using recursion.
 * @n: The input integer.
 *
 * Return: The factorial of n. If n is negative, returns -1.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
