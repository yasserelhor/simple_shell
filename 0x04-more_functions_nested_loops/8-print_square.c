#include "main.h"

/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */

void print_square(int n)
{
	int d;
	int q;

	for (q = 0; q < n; q++)
	{
		for (d = 0; d < n; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
