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

	size_t div = length / 2;

	int i = 0;

	while (i != div)
		printf(str[i]);
		i++;
	printf('\n');
}
