#include "main.h"

/**
 * _restrlen - Recursively calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _restrlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _restrlen(++s));
}

/**
 * pal - Recursively checks if a string is a palindrome.
 * @s: The input string.
 * @l: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pal(s + 1, l - 2));
	}
	return (0);
}

/**
 * pal - Recursively checks if a string is a palindrome.
 * @s: The input string.
 * @l: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _restrlen(s);

	return (pal(s, len - 1));
}
