#include "main.h"

/**
 * _realloc - Reallocates a memory block with a new size
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: The current size of the memory block
 * @new_size: The new size for the memory block
 *
 * Return: A pointer to the reallocated memory block,
 * or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
