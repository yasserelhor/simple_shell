#include "main.h"

/**
 * more_numbers - Prints a series of numbers and newlines
 *
 * Description: This function prints the numbers from the string "num"
 *              followed by a newline character. It repeats this process
 *              10 times, each time starting from the beginning of the "num"
 *              string.
 */

void more_numbers(void)
{
	char num[] = "01234567891011121314";

	int t = 0;

	int t1 = 0;

	while (t <= 9)
	{
		while (t1 <= 20)
		{
			_putchar(num[t1]);
			t1++;
		}
		t++;
		_putchar('\n');
	}
}
