#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if c is a letter, lowercase, or uppercase else return 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
