#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: Number of underscores to print.
 *
 * If n is less than or equal to 0, it prints a newline.
 * Otherwise, it prints n underscores followed by a newline.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
