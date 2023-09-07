#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: printing a sentence using the write function.
 *
 * Return: returns 1 (fail).
*/

int main(void)

{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, 59);
	return (1);
}
