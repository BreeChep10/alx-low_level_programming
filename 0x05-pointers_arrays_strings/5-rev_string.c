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
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
