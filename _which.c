#include "shell.h"


char **find_file_path(__attribute__((unused))char **environ)
{
	char *full_path;
	char **pathdir;

	full_path = getenv("PATH");
	pathdir = split_line(full_path);
	return (pathdir);
}
