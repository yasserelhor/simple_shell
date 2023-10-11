#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, 1 for argument count error, or 2 for negative 'bytes'.
 */

int main(int argc, char *argv[])
{

	int ind, byt;
	int (*add)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (ind = 0; ind <  byt; ind++)
	{
		op = *(unsigned char *)add;
		printf("%.2x", op);

		if (ind == byt - 1)
			continue;
		printf(" ");
		add++;
	}
	printf("\n");
	return (0);
}
