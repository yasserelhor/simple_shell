#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string and prints it.
 * @s: Pointer to the string to be reversed.
 *
 * Description:
 * This function takes a pointer to a string and reverses it in-place.
 * It then prints the reversed string followed by a newline character.
 */

void rev_string(char *s)
{
	size_t length = strlen(s);

	int start = 0;

	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}

}
