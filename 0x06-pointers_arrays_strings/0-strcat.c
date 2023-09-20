#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)

		dest[c++] = src[c2];

	return (dest);
}
