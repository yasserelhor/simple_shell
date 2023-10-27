#include "main.h"

/**
 * flip_bits - Counts the number of different bits
 * between two numbers.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits that differ between n and m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n;


	for (n = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n++;
	}


	return (n);
}
