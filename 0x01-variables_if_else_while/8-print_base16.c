#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers
 *              of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alph[] = "0123456789abcdef\n";

	int i = 0;

	while (alph[i] != '\0')
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
