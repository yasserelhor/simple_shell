#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator - Iterates through an array and applies a function to each element.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to a function that takes an integer as a parameter.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
