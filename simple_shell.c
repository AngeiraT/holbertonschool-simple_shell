#include "shell.h"
int main(int ac, char **av, char **env)
{
	char *line = NULL;
	char **arg;
	(void)ac;
	(void)av;
	(void)env;

	while (1)
	{
		/*prompt*/
		if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

		/*receives user input and stores it in line*/
		line = read_line();
		
		

		/*check if command is exit*/

		/*if (_strcmp(line[0], EXITCMD) == 0)
		{
			exit(0);
		}
		*/


		/*check if command is enter*/
		if (*line == '\n')
		{
			free(line);
			continue;
		}

		/* tokenizes line */
		arg = split_line(line);
/*
		find_file_path(env);
*/
		/* executes the validate command*/
		execute_line(arg);

		/*Frees memory for next command*/
		free(line);
		free_commands(arg);
	}
	free(line);
	return (0);
}
