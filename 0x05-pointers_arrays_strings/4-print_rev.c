#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be reversed and printed.
 *
 * Description: This function takes a pointer to a string 's' and
 * prints the characters in reverse order, followed by a newline.
 */

void print_rev(char *s)
{
	size_t length = strlen(s);
	
	int i;

	for (i = length - 1; i >= 0; i--)
		printf("%c", s[i]);

	printf("\n");
}
