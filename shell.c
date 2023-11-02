#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>


/**
 * main - Entry point for a custom shell program.
 *
 * Description: This function implements a simple shell
 * that reads user input,
 * parses commands, and executes them.
 * It provides a command-line interface with
 * basic functionality, including command execution
 * and the "exit" command to
 * exit the shell.
 *
 * Return: Always returns 0.
 */



int main(int argc, char *argv[])
{
    char *cmds[MAX_COMMANDS];
    int f_pipe = 0;
    size_t bs = 0;
    int i;
    int n_cmds;
    char *input = NULL;
    (void)argc;

    while (1 && !f_pipe) {
        if (!isatty(STDIN_FILENO))
            f_pipe = 1;

        read_input(&input, &bs);
        parse_input(input, cmds, &n_cmds);

        if (n_cmds > 0) 
	{
            if (strcmp(cmds[0], "exit") == 0) 
	    {
                free(input);
                exit(EXIT_SUCCESS);
            }

            exec_c(cmds[0], cmds, argv[0]);

            for (i = 0; i < n_cmds; i++) 
	    {
                free(cmds[i]);
            }
        }

        free(input);
        input = NULL;
    }

    return 0;
}
