#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates
 * memory using malloc and checks for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory
 * if successful, or exits with status 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
