#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard from a 2D array.
 * @a: Pointer to the 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int f, s;

	for (f = 0; f < 8; f++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[f][s]);
		}
		_putchar('\n');
	}
}
