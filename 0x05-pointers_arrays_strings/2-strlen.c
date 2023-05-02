#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: Character to be checked.
 *
 * Return: The number of characters in the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
