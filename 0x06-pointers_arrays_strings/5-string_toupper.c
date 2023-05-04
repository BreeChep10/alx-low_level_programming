#include "main.h"

/**
 * string_toupper - Function that converts a string to uppercase.
 * @s: string to be modified.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;

		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (s);
}
