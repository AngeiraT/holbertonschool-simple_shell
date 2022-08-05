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
		/*prompt*/
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);

		/*receives user input and stores it in line*/
		line = read_line();

		/*check if command is enter*/
		if (*line == '\n')
		{
			free(line);
			line = NULL;
			continue;
		}

		/* tokenizes line */
		arg = split_line(line);
		
		/*check if command is exit*/

		if (_strcmp(line, "exit") == 0)
		{
			free(line);
			line = NULL;
			free(arg);
			arg = NULL;
			exit(0);
		}

		/* executes the validate command*/
		if (arg[0] != NULL)
			execute_line(arg, env);

		/*Frees memory for next command*/
		free(line);
		line = NULL;
		free(arg);
		arg = NULL;
	}
	free(line);
	line = NULL;
	return (0);
}
