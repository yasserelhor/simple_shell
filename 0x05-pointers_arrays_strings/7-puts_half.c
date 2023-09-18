#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a newline.
 *
 * @str: Pointer to the input string.
 */

void puts_half(char *str)
{
	size_t length = strlen(str);

	size_t n = 0;

	size_t i;

	if (length % 2 == 0)
	{
		n = length / 2;
	} else
	{
		n = (length - 1) / 2;
	}

	i = lenghth -n;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}

	printf("\n");
}
