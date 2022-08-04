#include "shell.h"
int main(int ac, char **av, char **env)
{
	char *line = NULL;
	char **arg;
	/*size_t bufsize = 0;*/
	(void)ac;
	(void)av;
	(void)env;

	while (1)
	{
		if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

		/*prompt*/

		/*printf("#cisfun$ ");*/

		/*receives user input and stores it in line*/
		/*if (getline(&line, &bufsize, stdin) == -1)
		{
			write(1, "\n", 1);
			break;
		}*/
	
		line = read_line();

		if (line[0] == '\0')
		{
			free(line);
			continue;
		}

		/* tokenizes line */
		arg = split_line(line);
		execute_line(arg);
		free (line);
		free(arg);
	}

	return (0);
}
