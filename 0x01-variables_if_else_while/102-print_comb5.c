#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all unique two-digit number
 *              combinations separated by commas and spaces. It starts with
 *              the smallest two-digit number and ends with the largest.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}

			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
