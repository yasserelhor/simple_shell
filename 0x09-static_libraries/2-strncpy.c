#include "main.h"

/**
 * _strncpy - Copies up to 'n' characters from 'src' to 'dest'.
 *
 * @dest: Destination buffer to store the copied characters.
 * @src: Source string to copy characters from.
 * @n: Maximum number of characters to copy.
 *
 * Return: A pointer to 'dest' containing the copied characters.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
