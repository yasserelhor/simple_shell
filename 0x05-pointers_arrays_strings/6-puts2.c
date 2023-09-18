#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * followed by a newline.
 * @str:The input string to be processed.
 *
 * Description:
 * This function takes a pointer to a
 * null-terminated string as input and
 * prints every other character
 * of the string, starting from the first character.
 * Each character is followed by a newline character.
 */

void puts2(char *str)
{
	int nim = 0;

	while (str[nim] != '\0')
	{
		printf("%c\n", str[nim]);
		nim += 2;
	}
}
