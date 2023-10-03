#include "main.h"

/**
 * create_array - Creates an array of chars initialized with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: A pointer to the newly created array, or NULL if size is 0
 *         or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
