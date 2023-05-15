#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the argument
 * of the program.
 * @ac: Number of arguements in the program.
 * @av: Array of arguements passed in the program.
 *
 * Return: Pointer to the new concatenated string.
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int a, b, len = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			len++;
		}
		len++;
	}
	len++;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			new_str[len++] = av[a][b];
		new_str[len++] = '\n';
	}
	new_str[len] = '\0';
	return (new_str);
}
