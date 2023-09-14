#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Description: This function uses a while loop to print numbers
 *              from 0 to 9 by adding the character '0' to the current
 *              value of n and then using putchar to display it.
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
