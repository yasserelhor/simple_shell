#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


/**
 * exec_c - Execute a command with arguments.
 *
 * @command:    The command to execute.
 * @arguments:  An array of arguments for the command.
 * @argv:       The name of the program executing the command.
 */


void exec_c(const char *command, char *const arguments[], const char *argv)
{
	int status;
	pid_t pid = fork();

	if (pid == -1)
	{
	perror(argv);
	exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
	if (strchr(command, '/') != NULL)
		execvp(command, arguments);
	else
	{
	char *path = getenv("PATH");
		if (path != NULL)
		{
		char *path_copy = strdup(path);
		char *token = strtok(path_copy, ":");
		char command_path[100];

		while (token != NULL)
		{
			snprintf(command_path, sizeof(command_path), "%s/%s", token, command);
			execvp(command_path, arguments);
			token = strtok(NULL, ":");
		}

		free(path_copy);
		}
	fprintf(stderr, "%s: command not found\n", argv);
	exit(EXIT_FAILURE);
	}
	}
	else
	{
	waitpid(pid, &status, 0);
	}
}



/**
 * read_input - Read a line of input from the user
 * @buffer: Pointer to store the input string
 * @n: Pointer to store the size of the input buffer
 */

void read_input(char **buffer, size_t *n)
{
	char prompt[] = " :)> ";
	char tempBuffer[256];
	size_t len;

	if (buffer == NULL || n == NULL)
		return;

	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, prompt, strlen(prompt));

	if (fgets(tempBuffer, sizeof(tempBuffer), stdin) == NULL)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("(fgets)");
			exit(EXIT_FAILURE);
		}
	}

	len = strlen(tempBuffer);
	if (len > 0 && tempBuffer[len - 1] == '\n')
		tempBuffer[len - 1] = '\0';

	*n = len + 1;
	*buffer = (char *)malloc(*n);
	if (*buffer == NULL)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}
	strcpy(*buffer, tempBuffer);
}



/**
 * get_command - Splits an ipt an array of tokens based on whitespace.
 * @input: The input string to split.
 *
 * Return: A dynamically allocated array of token strings, or NULL on failure.
 */

char **get_command(char *input)
{
	int i = 0;
	char *token;
	char **command_args = (char **)malloc((MAX_COMMANDS + 1) * sizeof(char *));

	if (command_args == NULL)
	{
	perror("malloc");
		exit(EXIT_FAILURE);
	}

	token = strtok(input, " \t\n");
	while (token != NULL && i < MAX_COMMANDS)
	{
		command_args[i] = (char *)malloc(strlen(token) + 1);
		if (command_args[i] == NULL)
		{
		perror("malloc");
		exit(EXIT_FAILURE);
		}
		strcpy(command_args[i], token);
		token = strtok(NULL, " \t\n");
		i++;
	}
	command_args[i] = NULL;

	return (command_args);
}


/**
 * parse_input - Tokenizes an input string into commands.
 *
 * @input:      Input string to tokenize.
 * @commands:   Array to store tokenized commands.
 * @num_commands:  Pointer to the number of commands.
 */

void parse_input(const char *input, char **commands, int *num_commands)
{
	char *token;
	int count = 0;
	char *input_copy = strdup(input);

	if (input_copy == NULL)
	{
		*num_commands = -1;
		return;
	}

	token = strtok(input_copy, " \t\n");
	while (token != NULL)
	{
	commands[count] = strdup(token);
	if (commands[count] == NULL)
	{
		*num_commands = -1;
		free(input_copy);
		return;
	}
		token = strtok(NULL, " \t\n");
		count++;
	}
	commands[count] = NULL;

	free(input_copy);
	*num_commands = count;
}
