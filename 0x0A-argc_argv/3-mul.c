#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integers passed as command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on successful execution, 1 for errors.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
