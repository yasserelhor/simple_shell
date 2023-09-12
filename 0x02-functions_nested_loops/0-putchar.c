#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function prints the characters of the string "_putchar"
 *              using the _putchar function and then adds a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";

	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	putchar('\n');
	return (0);
}
