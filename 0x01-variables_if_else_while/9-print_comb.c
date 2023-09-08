#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from 0 to 9 separated by commas
 *              and spaces, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');

		}
		digit++;
	}
	putchar('\n');

	return (0);
}
