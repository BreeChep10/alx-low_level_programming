#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13.
 * @str: The string to be encode.
 *
 * Return: The encoded string.
 */

char *rot13(char *str)
{
	int index, j;
	char letters[] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R',
		'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'A', 'B', 'C',
		'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};

	for (index = 0; str[index] != '\0'; index++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[index] == letters[j])
			{
				str[index] = rot[j];
				break;
			}
		}
	}
	return (str);
}
