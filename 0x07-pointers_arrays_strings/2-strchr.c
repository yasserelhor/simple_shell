#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to search in.
 * @c: The character to find.
 *
 * Return: If the character is found, a pointer to its location;
 *         otherwise, NULL.
 */

char *_strchr(char *s, char c)
{
	int j;

	while (1)
	{
		j = *s++;
		if (j == c)
		{
			return (s - 1);
		}
		if (j == 0)
		{
			return (NULL);
		}
	}
}
