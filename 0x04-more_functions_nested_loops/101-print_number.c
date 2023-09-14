#include "main.h"

/**
 * print_number - Prints an integer to the standard output
 * @n: The integer to be printed
 *
 * Description: This function takes an integer 'n' and prints it to the
 * standard output. It handles negative numbers by printing a minus sign ('-')
 * before the absolute value of 'n'. It recursively breaks down 'n' into its
 * digits and prints them one by one.
 */

void print_number(int n)
{
	unsigned int n2 = 0;

	if  (n < 0)
	{
		n2 = -n;
		_putchar('-');
	}

	else
	{
		n2 = n;
	}

	if (n2 / 10)
	{
		print_number(n2 / 10);
	}

	_putchar((n2 % 10) + '0');
}
