#include "main.h"

/**
 * string_nconcat - Concatenates
 * the first 'n' characters of two strings, 's1' and 's2',
 * into a new string and returns
 * it. Handles NULL input strings gracefully.
 * @s1: The first input string.
 * @s2: The second input string.
 * @n: The maximum number of characters from 's2' to concatenate.
 *
 * Return: A pointer to the
 * concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, f, r;
	char *s;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
		;
	}
	if (s2 == NULL)
	{
		f = 0;
	}
	else
	{
		for (f = 0; s2[f]; ++f)
		;
	}
	if (f > n)
		f = n;


	s = malloc(sizeof(char) * (a + f + 1));
	if (s == NULL)
		return (NULL);
	for (r = 0; r < a; r++)
		s[r] = s1[r];
	for (r = 0; r < f; r++)
		s[r + a] = s2[r];
	s[a + f] = '\0';


	return (s);
}
