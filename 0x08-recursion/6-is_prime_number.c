#include "main.h"

/**
 * cal - Checks if one integer is a divisor of another.
 * @n: The potential divisor.
 * @m: The integer to be divided.
 *
 * Return: 0 if n is a divisor of m, 1 otherwise.
 */

int cal(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (cal(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Checks if a given integer is a prime number.
 * @n: The input integer.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (cal(3, n));
	}
}
