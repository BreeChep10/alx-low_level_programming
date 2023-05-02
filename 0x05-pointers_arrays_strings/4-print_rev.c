#include "main.h"

/**
 * print_rev - Printing the string in reverse.
 * @s: The string to be written in reverse.
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int x;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
