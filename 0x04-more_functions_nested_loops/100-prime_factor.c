#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program calculates and prints the largest prime factor
 * of the number 612852475143.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int d = 612852475143;
	long int mid;

	for (mid = 2; mid < d; mid++)
	{
		if (d % mid == 0)
		{
			d = d / mid;
		}
	}
	printf("%ld\n", mid);
	return (0);
}
