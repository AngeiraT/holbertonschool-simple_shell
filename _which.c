#include "shell.h"
/**
 *find_file_path - finds the full path
 *@environ: the list of enviroment varibles
 *Return: Void
 */

char **find_file_path(__attribute__((unused))char **environ)
{
	char *full_path;
	char **pathdir;

	full_path = getenv("PATH");
	pathdir = split_line(full_path);
	return (pathdir);
}
