#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of 'a' and 'b'.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from another.
 * @a: The first integer (minuend).
 * @b: The second integer (subtrahend).
 *
 * Return: The result of 'a' minus 'b'.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of 'a' and 'b'.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one integer by another, handling division by zero.
 * @a: The dividend (numerator).
 * @b: The divisor (denominator).
 *
 * Return: The result of 'a' divided by 'b'.
 * If 'b' is zero, it prints an error message and exits with code 100.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Computes the remainder of integer
 * division, handling division by zero.
 * @a: Dividend.
 * @b: Divisor.
 *
 * Return: Remainder of 'a' divided by 'b'. Prints
 * error message and exits with code 100 if 'b' is zero.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
