#include "main.h"

/**
 * clear_bit - Clears a bit at a specified index to 0.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to clear.
 * Return: 1 if successful, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}

	byte = 1 << index;


	if (*n & byte)
	{
		*n ^= byte;
	}

	return (1);
}
