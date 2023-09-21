#include "main.h"

/**
 * rot13 - A function that encodes a string using ROT13.
 * @s: The input string to encode using ROT13.
 * Return: An encoded string.
 */

char *rot13(char *s)
{
	int i, f;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (f = 0; a[f] != '\0'; f++)
		{
			if (s[i] == a[f])
			{
				s[i] = b[f];
				break;
			}
		}
	}

	return (s);
}
