#include "shell.h"

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
