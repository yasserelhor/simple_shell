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
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
