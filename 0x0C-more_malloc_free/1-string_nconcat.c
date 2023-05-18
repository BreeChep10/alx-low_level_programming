#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: The first string to be concatenated upon.
 * @s2: The string to concatenate.
 * @n: Number of bytse in the s2 string to concatenate.
 *
 * Return: The new concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j, concat_len;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	if (n >= len2)
		n = len2;

	concat_len = len1 + n;
	concat_str = malloc(sizeof(char) * (concat_len + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
		concat_str[len1 + j] = s2[j];

	concat_str[concat_len] = '\0';

	return (concat_str);
}
