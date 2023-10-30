#include "main.h"

/**
 * error_file - Handles file-related errors and exits if necessary.
 * @file_from: The file descriptor for reading.
 * @file_to: The file descriptor for writing.
 * @argv: An array of command-line arguments.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point for a simple file copy utility.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, various exit codes on error.
 */

int main(int argc, char *argv[])
{
	int fr, ft, err;
	ssize_t n, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fr = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fr, ft, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(fr, buffer, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		nwr = write(ft, buffer, n);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err = close(fr);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		exit(100);
	}

	err = close(ft);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		exit(100);
	}
	return (0);
}
