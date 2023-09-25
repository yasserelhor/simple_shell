#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of `s`
 * that consists of characters in `accept`.
 *
 * @s: The string to be checked.
 * @accept: The set of characters to match against.
 *
 * Return: The number of characters in `s` that are in `accept`
 *         before the first character that is not in `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *f = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = f;
	}
	return (c);
}
