#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to set.
 * Return: 1 if successful, -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}
	byte = 1 << index;
	*n = (*n | byte);

	return (1);
}
