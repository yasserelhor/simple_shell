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
	int lnChr;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
