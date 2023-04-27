#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: Character to be checked.
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	_putchar('\n');
	}
}
