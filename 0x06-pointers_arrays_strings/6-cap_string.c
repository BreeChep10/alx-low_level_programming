#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: The string to be checked.
 *
 * Return: The changed string.
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index == 0 && str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		else if (str[index] == 32 ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == ',' ||
				str[index] == ';' ||
				str[index] == '.' ||
				str[index] == '!' ||
				str[index] == '?' ||
				str[index] == '\"' ||
				str[index] == '(' ||
				str[index] == ')' ||
				str[index] == '{' ||
				str[index] == '}')
		{
			while (str[index+1] == ' ')
			{
				index++;
			}
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] -= 32;
			}
		}
		index++;
	}
	return (str);
}
