#include "shell.h"
/**
 *free_commands - a double pointer free arguments
 *@arg: arguments in the command
 *Return: Void
 */

void free_commands(char **args)
{
	int idx = 0;

	while (args[idx] != NULL)
	{
		free(args[idx]);
		idx++;
	}
	free(args);
}
