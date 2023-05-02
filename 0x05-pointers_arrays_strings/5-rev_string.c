#include "main.h"
#include <stdio.h>
/**
 * rev_string - Function that reverses a string.
 * @s: String to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int length = 0, b, c;
	char swap;

	while (s[length] != '\0')
	{
		length++;
	}

	c = length - 1;

	for (b = 0; c >= 0 && b < c; b++, c--)
	{
		swap = s[b];
		s[b] = s[c];
		s[c] = swap;
	}
}
