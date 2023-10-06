#include "main.h"

/**
 * _calloc - Allocates memory for
 * an array of nmemb elements of size bytes each,
 * and initializes the memory to zero.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated
 * memory, or NULL if nmemb or size is 0,
 * or if malloc fails to allocate memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (f = 0; f < (nmemb * size); f++)
		i[f] = 0;
	return (i);
}
