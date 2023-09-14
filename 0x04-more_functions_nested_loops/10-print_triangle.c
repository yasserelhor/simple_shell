#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters.
 *
 * @size: The height/size of the triangle.
 *
 * Description:
 * This function prints a right-angled triangle made of '#' characters.
 * The triangle's height is determined by the 'size' parameter.
 * If 'size' is less than or equal to 0, it prints a newline character.
 * The triangle is aligned to the right.
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int hight, base;

		for (hight = 1; hight <= size; hight++)
		{
			for (base = hight; base < size; base++)
			{
				_putchar(' ');
			}

			for (hight = 1; base <= hight; base++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
