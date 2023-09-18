#include "main.h"

/**
 * print_array - Prints an array of integers followed by a newline.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 *
 * This function takes an array of integers and its size as input and
 * prints each element of the array followed by a newline character.
 *
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
