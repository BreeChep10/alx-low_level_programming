#include "main.h"

/**
 * puts_half - Function that prints the second half of a string.
 * @str: String to be analyzed and its half printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
