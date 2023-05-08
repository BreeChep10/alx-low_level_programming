#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: Pointer to memory location to be copied to.
 * @src: Pointer to the memory location to be copied from.
 * @n: Number of bytes to be copied.
 *
 * Return: Return dest, the copied strinf.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
