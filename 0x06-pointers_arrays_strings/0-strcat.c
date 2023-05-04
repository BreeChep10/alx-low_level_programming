#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to the first string that will be concatenated on.
 * @src: Pointer to the string to be concatenated.
 *
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	return (dest);
}
