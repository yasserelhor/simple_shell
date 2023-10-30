#include "main.h"

/**
 * _strncat - Concatenate n characters from src to dest
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: A pointer to the destination string (dest)
 */

		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
