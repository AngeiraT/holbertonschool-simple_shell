#include "shell.h"
int main(void)
{
	char *line = NULL;
	char **arg;
	size_t bufsize = 0;

	while (1)
	{
		/*prompt*/
		printf("#cisfun$ ");

		/*receives user input and stores it in line*/
		if (getline(&line, &bufsize, stdin) == -1)
		{
			write(1, "\n", 1);
			break;
		}

		/* tokenizes line */
		arg = split_line(line);
		execute_line(arg);
		free (line);
		free(arg);
	}

	return (0);
}
