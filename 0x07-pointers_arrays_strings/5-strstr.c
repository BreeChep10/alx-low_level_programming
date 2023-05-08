#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: The string where the substring will be looked for.
 * @needle: The substring to be looked for in haystack.
 *
 * Return: A pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	if (*needle == 0)
	{
		return (0);
	}
	else
	{
		for (a = 0; haystack[a] != '\0'; a++)
		{
			for (b = 1; needle[b] != '\0' && haystack[a + b] != '\0'; b++)
			{
				if (haystack[a + b] != needle[b])
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (&haystack[a]);
			}
		}
		return (NULL);
	}
}
