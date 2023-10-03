#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first input string, or an empty string if NULL.
 * @s2: The second input string, or an empty string if NULL.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, f, d, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (f = 0; s2[f] != '\0'; f++)
		;

	str = malloc(sizeof(char) * (i + f + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (d = 0; d < i; d++)
		str[d] = s1[d];

	limit = f;
	for (f = 0; f <= limit; d++, f++)
		str[d] = s2[f];

	return (str);
}
