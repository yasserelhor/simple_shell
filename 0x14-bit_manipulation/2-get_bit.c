#include "main.h"

/**
 * get_bit - Retrieves a specific bit
 * from an unsigned long integer.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve.
 * Return: The value of the bit at the specified index, or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (c = 0; c <= 63; n >>= 1, c++)
	{
		if (index == c)
		{
			return (n & 1);
		}
	}

	return (-1);
}
