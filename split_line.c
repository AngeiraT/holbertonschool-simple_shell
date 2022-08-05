#include "shell.h"
/**
 *split_line - a functions that splits the command into tokens.
 *@line:  string of commands
 *Return: Void
 */

char **split_line(char *line)
{
	char **command;
	char *token;
	int idx = 0;

	command = malloc(sizeof(char *) * 20);

	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		command[idx] = token;
		idx++;
		token = strtok(NULL, TOK_DELIM);
	}
	 command[idx] = NULL;
	return (command);
}
