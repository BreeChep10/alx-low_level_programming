#include "main.h"

/**
 * _puts - Function that prints a string followed by a newline to the stdout.
 * @str: Strinng to printed.
 *
 * Return: void
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
