#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 *
 * @haystack: The main string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the found substring, or NULL
 *         if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
