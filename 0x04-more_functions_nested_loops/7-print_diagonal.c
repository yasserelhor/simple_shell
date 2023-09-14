#include "main.h"

/**
 * print_diagonal - Prints a diagonal line made of '\' characters.
 * @n: The number of '\' characters to print.
 *
 * Description: This function prints a
 * diagonal line consisting of '\' characters.
 * If n is less than or equal to 0, it prints a newline.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int b, f;

		for (b = 0; b < n; b++)
		{
			for (f = 0; f < n; f++)
			{
				if (f == b)
					_putchar('\\');
				else if (f < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
