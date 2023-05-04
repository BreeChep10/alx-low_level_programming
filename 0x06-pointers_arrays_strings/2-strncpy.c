#include "main.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: Pointer to the string to be copied.
 * @src: Pointer to where the string is copis copied to.
 * @n: The maximum number of bytes to be copied.
 *
 * Return: Copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;

	for (src_len = 0; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[src_len] = src[src_len];
	}
	for ( ; src_len < n; src_len++)
	{
		dest[src_len] = '\0';
	}
	return (dest);
}
