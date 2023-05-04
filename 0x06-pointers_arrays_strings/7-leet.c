#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encode.
 *
 * Return: The encoded string.
 */

char *leet(char *str)
{
	char leet_look[] = "aAeEoOtTlL";
	char leet_encode[] = "4433007711";
	int index;
	int j;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (j = 0; leet_look[j] != '\0'; j++)
		{
			if (str[index] == leet_look[j])
			{
				str[index] = leet_encode[j];
				break;
			}
		}
	}
	return (str);
}
