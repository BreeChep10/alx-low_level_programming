#include "main.h"

/**
 * print_alphabet - Print the alphabet in lower case followed by a new line.
 *
 * Return: Always (0) success.
 */

void print_alphabet(void)
{
	int letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
