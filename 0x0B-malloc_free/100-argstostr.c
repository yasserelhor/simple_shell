#include "main.h"

/**
 * argstostr - Concatenates
 * an array of strings into a single string with newlines.
 * @ac: The number of arguments.
 * @av: An array of strings.
 *
 * Return: A pointer to the
 * concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int v, i, j, t;

	if (ac == 0)
		return (NULL);

	for (v = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			v++;
		v++;
	}

	aout = malloc((v + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = t = 0; t < v; j++, t++)
	{
		if (av[i][j] == '\0')
		{
			aout[t] = '\n';
			i++;
			t++;
			j = 0;
		}
		if (t < v - 1)
			aout[t] = av[i][j];
	}
	aout[t] = '\0';

	return (aout);
}
