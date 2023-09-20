#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */


void reverse_array(int *a, int n)
{
	int i;
	int s;

	i = 0;
	while (i < n)
	{
		n--;
		s = a[i];
		a[i] = a[n];
		a[n] = s;
		i++;
	}
}
