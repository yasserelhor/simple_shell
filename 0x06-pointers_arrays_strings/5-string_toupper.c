#include "main.h"

/**
 * string_tolower - Function that changes all uppercase letters
 * of a string to lowercase.
 * @n: The string to convert to lowercase.
 * Return: n.
 */

char *string_tolower(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
