#include "shell.h"
char **split_line(char *line)
{
	char **command;
	char *token;
	int idx = 0;
	command = malloc(sizeof(char *)*2);

	token = strtok(line, TOK_DELIM);
	 while (token != NULL)
	{
		command[idx] = malloc(sizeof(char)*strlen(token)+1);
		command[idx] = token;
		idx++;
		token = strtok(NULL, TOK_DELIM);
	}
	command[idx] = malloc(sizeof(NULL));
	 command[idx] = NULL;
	return (command);
}
