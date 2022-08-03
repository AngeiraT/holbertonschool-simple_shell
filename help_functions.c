#include "shell.h"
/**
 * _strlen - return length of a string
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}




#include "shell.h"

/**
 * str_concat - Entry point
 * @s1: string one
 * @s2: string two
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += strlen(s1) + strlen(s2);
	new = malloc((total * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}

#include "shell.h"

/**
 * _strdup - copy a string
 * @str: copy string
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int lenght;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	lenght = strlen(str);
	copy = malloc(sizeof(char) * lenght + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}

#include "shell.h"
/**
 * _strcmp - Entry
 * @s1: hello
 * @s2: world
 * Return: Sucess 0
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
	}
		if (*s1 == '\0' && *s2 == '\0')
		return (0);
		else
		return (*s1 - *s2);
}
