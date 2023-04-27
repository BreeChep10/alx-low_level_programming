#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Character to be checked first.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
