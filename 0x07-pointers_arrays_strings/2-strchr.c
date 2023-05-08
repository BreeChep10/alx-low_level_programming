#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: Pointer to the string to be checked.
 * @c: The character to be searched.
 *
 * Return: The location of the character being located.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
