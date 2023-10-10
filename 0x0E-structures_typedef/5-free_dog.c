#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * This function takes a pointer
 * to a dog structure and frees the memory
 * allocated for its name, owner,
 * and the structure itself. It checks if
 * the pointer is not NULL before attempting to free the memory.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
