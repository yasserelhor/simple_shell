#include "function_pointers.h"

/**
 * int_index - Find the index of an integer
 * in an array using a custom comparison.
 * @array: Array to search.
 * @size: Size of the array.
 * @cmp: Pointer to a comparison function.
 *
 * Return: Index of the first match, or -1 if not found or on error.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
