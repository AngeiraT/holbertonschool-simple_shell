#include "shell.h"
char *read_line(void)
{
        char *line = NULL;
        size_t bufsize = 0;
	ssize_t	get_l;

        get_l = getline(&line, &bufsize, stdin);

	if (get_l == -1)
		exit (0);

        return (line);
}
