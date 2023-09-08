#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet characters from 'a'
 * to 'z' followed by a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	while (alpha[i] != '\0')

	{
		putchar(alpha[i]);
		i++;
	}

	return (0);

}
