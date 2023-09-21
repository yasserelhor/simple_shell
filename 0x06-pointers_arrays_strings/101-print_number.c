#include "main.h"
#include <string.h>

/**
 * print_number - Prints each digit of an integer.
 * @n: The integer to be printed.
 *
 * Description: This function takes an integer 'n' and prints each digit of
 * 'n' one by one using the _putchar function.
 */

void print_number(int n)
{
	int i;

	int len = strlen(n);

	for (i = 0; i != n; i++)
	{
		_putchar(n[i])
	}
}
