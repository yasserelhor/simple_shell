#include "main.h"

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
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	} else if (*s == '+')
	{
		s++;
	}


	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);

		}
		result = result * 10 + digit;
		s++;
	}
	return (sign * result);
}
