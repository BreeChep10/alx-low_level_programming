#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: String to be concatenated upon.
 * @src: Source string to concatenate.
 *
 * Return: The concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] != '\0' && src_len < n; src_len++)
	{
		dest[dest_len++] = src[src_len];
	}
	return (dest);
}
