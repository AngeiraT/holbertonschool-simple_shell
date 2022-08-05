#include "shell.h"
/**
 *read_line - reads the line of the user input
 *
 *Return: Void
 */

char *read_line(void)
{
        char *line = NULL;
        size_t bufsize = 0;
	ssize_t	get_l;

        get_l = getline(&line, &bufsize, stdin);

	if (get_l == -1)
	{	
		free(line);
		line = NULL;
		exit(0);
	}

        return (line);
}
