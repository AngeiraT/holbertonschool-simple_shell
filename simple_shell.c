#include "shell.h"
/**
 *main - Program that creates a simple shell
 *@ac: counts the number of arguments
 *@av: is the arguments on the command line
 *@env: the enviroment of variables
 *Return: Void
 */

int main(int ac, char **av, char **env)
{
	char *line = NULL;
	char **arg;
	(void)ac;
	(void)av;

	while (1)
	{
		if (isatty(STDIN_FILENO))/*prompt*/
			write(STDOUT_FILENO, "$ ", 2);

		line = read_line();/*receives user input and stores it in line*/
		if (*line == '\n')/*check if command is enter*/
		{
			free(line);
			line = NULL;
			continue;
		}
		arg = split_line(line);/* tokenizes line*/
		if (_strcmp(line, "exit") == 0) /*check if command is exit*/
		{
			free(line);
			line = NULL;
			free(arg);
			arg = NULL;
			exit(0);
		}
		if (arg[0] != NULL)/*execute the command if is validated*/
			execute_line(arg, env);

		free(line);
		line = NULL;
		free(arg);
		arg = NULL;
	}
	free(line);
	line = NULL;
	return (0);
}
