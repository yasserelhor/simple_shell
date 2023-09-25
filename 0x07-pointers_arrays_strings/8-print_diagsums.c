#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the 1D array representing the square matrix.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int f;
	int s1 = 0;
	int s2 = 0;

	for (f = 0; f < size; f++)
	{
		s1 += a[f];
		s2 += a[size - f - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
