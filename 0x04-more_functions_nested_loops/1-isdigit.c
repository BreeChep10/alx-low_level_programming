#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: Character to be checked.
 *
 * Return: 1 if c is digit else 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
