#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 * Return: 0 if big-endian, 1 if little-endian.
 */

int get_endianness(void)
{
	unsigned int byte;
	char *f;

	byte = 1;
	f = (char *) &byte;


	return ((int)*f);
}
