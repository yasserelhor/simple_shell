#include "main.h"
#include <stdio.h>

/**
 * main - Multiplies two numbers provided as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on successful execution, 98 for errors.
 */

int main(int argc, char *argv[])
{
	unsigned long mult;
	int i, f;

	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (f = 0; argv[i][f] != '\0'; f++)
		{
			if (argv[i][f] > 57 || argv[i][f] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mult = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mult);
	return (0);
}
