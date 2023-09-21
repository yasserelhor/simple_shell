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
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
