#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the digits from 0 to 9 using a while loop
 *              and the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');

	return (0);
}

