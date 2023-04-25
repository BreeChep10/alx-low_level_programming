#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 *
 * @c: character to be checked.
 *
 * Return: 1 if lower case is found and 0 for anything else.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
