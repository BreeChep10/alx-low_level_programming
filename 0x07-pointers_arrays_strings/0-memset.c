#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to the block of memory to be filled.
 * @b: The value to be set.
 * @n: The number of times b is set.
 *
 * Return: The new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
