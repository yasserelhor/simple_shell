#include "main.h"

/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the 1D array representing the square matrix.
 * @size: Size of the square matrix.
 */

void print_diagsums(int *a, int size)
{
	int f;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (f = 0; f < size; f++)
	{
		sum += a[(size * f) + f];
		sum1 += a[(size * (f + 1)) - (f + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
