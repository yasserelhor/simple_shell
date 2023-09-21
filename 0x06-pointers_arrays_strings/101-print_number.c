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
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	print_digit(n % 10);
}
