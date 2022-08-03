#include "shell.h"
void execute_line(char **arg)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == -1)
	perror("Fork failed");

	if (pid == 0)
	{
		if (execve(arg[0], arg, NULL) == -1)
			perror("Execve failed");
	}
	else
	{
		wait(&status);
	}
}
