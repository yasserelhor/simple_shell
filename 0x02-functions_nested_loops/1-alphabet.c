#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 *
 * Description:
 * This function prints the lowercase alphabet from 'a' to 'z' followed by
 * a newline character '\n' to the standard output.
 *
 * Return: void (no return value)
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int ch;

	for (ch = 0; ch < 26; ch++)
		_putchar(str[ch]);
	putchar('\n');
	return (0);
}
