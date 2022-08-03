#include "shell.h"
char **split_line(char *line)
{
	char **command;
	char *token;
	int idx = 0;
	command = malloc(sizeof(char *));

	token = strtok(line, TOK_DELIM);
	 while (token != NULL)
	{
		command[idx] = malloc(sizeof(char)*strlen(token));
		command[idx] = token;
		idx++;
		token = strtok(NULL, TOK_DELIM);
	}
	command[idx] = NULL;
	return (command);
}
