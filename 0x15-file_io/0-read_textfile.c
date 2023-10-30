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
	ssize_t r, w, o;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);


	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}

	free(b);

	close(o);

	return (w);
}
