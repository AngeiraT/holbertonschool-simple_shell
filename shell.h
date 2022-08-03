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
void execute_line(char **arg);
char *read_line(void);
char **find_file_path(char **environ);
/*int main(int ac, char **av, char **env);*/

#endif
