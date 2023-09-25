#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the first occurrence in 's' of any byte in 'accept',
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
