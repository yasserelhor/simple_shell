#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 except 1 and 4.
 */

void print_most_numbers(void)
{
	char num[] = "01356789";

	int i = 0;

	while (i < 8)
	{
		_putchar(num[i]);
		i++;
	}
	_putchar('\n');
}
