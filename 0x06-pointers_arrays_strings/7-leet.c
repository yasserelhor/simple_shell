#include "main.h"

/**
 * leet - encodes a string into 1337 speak.
 * @s: string to encode
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i;
	int f;
	int r;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		f = 0;
		r = 0;
		while (l[f] != '\0')
		{
			if (s[i] == l[f])
			{
				r = f;
				s[i] = e[r];
			}
			f++;
		}
		i++;
	}
	return (s);
}
