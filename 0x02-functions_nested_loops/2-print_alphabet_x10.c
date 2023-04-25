#include "main.h"

/**
 * print_alphabet_x10 - Printing the alphabet 10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char abc;
	int x = 0;

	while (x < 10)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
		x++;
	}
}
