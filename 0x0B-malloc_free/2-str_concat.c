#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Function that concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: The concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int index_1 = 0, index_2 = 0, a, b;
	char *concat_str;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	while (s1[index_1] != '\0')
	{
		index_1++;
	}
	while (s2[index_2] != '\0')
	{
		index_2++;
	}
	concat_str = malloc(sizeof(char) * (index_1 + index_2 + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < index_1; a++)
	{
		concat_str[a] = s1[a];
	}
	for (b = 0; b < index_2; b++)
	{
		concat_str[a + b] = s2[b];
	}
	concat_str[a + b] = '\0';

	return (concat_str);
}
