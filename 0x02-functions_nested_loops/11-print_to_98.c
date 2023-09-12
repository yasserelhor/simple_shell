#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98
 * , inclusive, followed by a newline.
 * @n: The starting number.
 *
 * Description:
 * This function prints a sequence
 * of numbers starting from the input number 'n'
 * and ending at 98, inclusive. If 'n' is greater
 * than 98, it counts down from 'n'
 * to 98, and if 'n' is less than 98,
 * it counts up from 'n' to 98. The numbers are
 * separated by commas and followed by a newline character.
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count ++)
			printf("%d, ", count);
	printf("98\n");
}
