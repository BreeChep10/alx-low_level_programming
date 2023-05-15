#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memmory.
 * @str: Pointer to the string to be copied.
 *
 * Return: The copied string.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len = 0;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	for (index = 0; index < len; index++)
	{
		duplicate[index] = str[index];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
