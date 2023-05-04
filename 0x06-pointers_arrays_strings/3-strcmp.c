#include "main.h"

/**
 * _strcmp - function that compares 2 strings.
 * @s1: String one to compare.
 * @s2: String two to be compared to s1.
 *
 * Return: An integer less than, equal to, or greater than zero, depending
 * on whether s1 is less than, equal to, or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
	}
	if (s1[index] == s2[index])
	{
		return (0);
	}
	else if (s1[index] < s2[index])
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
