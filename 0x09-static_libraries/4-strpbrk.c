#include "main.h"

/**
 * _strpbrk - Searches a string for any character in another string.
 * @s: The string to search.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first occurrence of a character from 'accept'
 *         in 's', or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int f, k;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[f] == accept[k])
				return (s + f);
		}
	}
	return (0);
}
