#include "main.h"

/**
 * _sqrt_recursion - Computes the square
 * root of a non-negative integer using recursion.
 * @n: The input integer.
 *
 * Return: The square root of n. If n is negative, returns -1.
 */

int _sqrt_recursion(int n)
{
	return (actsq(n, 1));
}

/**
 * actsq - Helper function to compute
 * the square root of a non-negative integer.
 * @n: The input integer.
 * @i: The current value being tested.
 *
 * Return: The square root
 * of n if it's a perfect square, -1 otherwise.
 */

int actsq(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actsq(n, i + 1));
}
