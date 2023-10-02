#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins needed for change.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on successful execution, 1 for errors.
 */

int main(int argc, char *argv[])
{
	int num, f, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (f = 0; f < 5 && num >= 0; f++)
	{
		while (num >= coins[f])
		{
			res++;
			num -= coins[f];
		}
	}

	printf("%d\n", res);
	return (0);
}


