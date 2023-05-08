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
	int a;

	if (*needle == 0)
	{
		return (haystack);
	}
	else
	{
		while (*haystack)
		{
			a = 0;
			if (haystack[a] == needle[a])
			{
				do {
					if (needle[a + 1] == '\0')
					{
						return (haystack);
					}
					a++;
				} while (haystack[a] == needle[a]);
			}
			haystack++;
		}
	}
	return ('\0');
}
