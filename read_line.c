#include "shell.h"
char *read_line(void)
{
        char *line = NULL;
        size_t bufsize = 0;

        printf("$ ");
        getline(&line, &bufsize, stdin);
        return (line);
}
