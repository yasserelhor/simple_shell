#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
	char *ori_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ori_dest);
}
