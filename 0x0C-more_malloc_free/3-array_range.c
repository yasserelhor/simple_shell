#include "main.h"

/**
 * array_range - Creates an integer
 * array with values from 'min' to 'max'
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the
 * newly allocated integer array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *p;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
