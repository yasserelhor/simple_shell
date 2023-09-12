#include "main.h"

/**
 * _isalpha - checks if the character c is an alphabetic character.
 *
 * @param c: The character to check.
 *
 * @return 1 if the character is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
