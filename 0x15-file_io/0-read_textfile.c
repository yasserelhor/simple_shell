#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads and prints text from a file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 * Return: The number of letters read and printed, or 0 on failure.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fn;
	int c;
	size_t i = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fn = fopen(filename, "r");
	if (fn == NULL)
	{
		return (0);
	}

	while (i < letters && (c = fgetc(fn)) != EOF)
	{
		if (write(1, &c, 1) == 1)
		{
			fclose(fn);
			return (0);
		}
		i++;
	}

	fclose(fn);
	return (i);
}

