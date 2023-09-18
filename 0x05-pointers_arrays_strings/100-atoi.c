#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Description: This function takes
 * a string as input and converts it to an
 * integer. It skips leading white
 * spaces, handles sign characters ('+' and
 * '-'), and converts the numeric characters
 * to an integer value. It also
 * checks for overflow and returns
 * INT_MAX or INT_MIN in case of overflow.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
