#ifndef _SHELL_H_
#define _SHELL_H_

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define TOK_DELIM " \t\r\n:"

/* Prototypes */
char **split_line(char *line);
void execute_line(char **arg, char **env);
char *read_line(void);
char **find_file_path(char **environ);
extern char **environ;
void free_commands(char **args);
int _strcmp(char *s1, char *s2);

#endif
