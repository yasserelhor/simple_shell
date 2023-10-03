#include "main.h"

/**
 * _strdup - Duplicate a string in memory.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to a newly allocated duplicated string, or NULL if
 * memory allocation fails or if str is NULL.
 */

char *_strdup(char *str)
{
	char *alloc;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + len) != '\0')
		len++;

	len++;

	alloc = malloc(sizeof(*str) * len);

	if (alloc == NULL)
		return ('\0');

	for (i = 0; i < len; i++)
		alloc[i] = *(str + i);

	alloc[i] = '\0';

	return (alloc);
}
