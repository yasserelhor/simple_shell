#ifndef MAIN_H
#define MAIN_H
#define MAX_COMMANDS 100
#include <stddef.h>

char **get_command(char *input);
void exec_c(const char *command, char *const arguments[], const char *argv);
void parse_input(const char *input, char **commands, int *num_commands);
void read_input(char **buffer, size_t *n);
int _atoi(char *s);

#endif
