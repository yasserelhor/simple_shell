#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function takes two integer pointers as input and swaps the values
 * of the integers they point to. The original values of the integers are
 * exchanged, ensuring that the value pointed to by 'a' becomes the value
 * pointed to by 'b', and vice versa.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
