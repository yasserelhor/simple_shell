#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints
 *              the lowercase alphabet characters from 'z'
 *              to 'a' in reverse order, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char alph[] = "zyxwvutsrqponmlkjihgfedcba\n";

	int i = 0;

	while (alph[i] != '\0')
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
