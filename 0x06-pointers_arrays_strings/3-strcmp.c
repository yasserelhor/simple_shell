#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: An integer value representing the comparison result:
 *         - 0 if the strings are equal.
 *         - A positive value if s1 is lexicographically greater than s2.
 *         - A negative value if s2 is lexicographically greater than s1.
 */

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		eq = *s1 - *s2;

	return (eq);
}
