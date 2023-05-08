#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: Pointer to the prefix to be measures.
 *
 * Return: The number of bytes in s which consists only
 * of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
