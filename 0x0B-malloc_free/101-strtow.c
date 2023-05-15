#include "main.h"
#include <stdlib.h>

/**
 * strtow - The string to be splitted.
 * @str: Pointer to the string to be splitted.
 *
 * Return: Pointer to the array of splitted strings.
 */

char **strtow(char *str)
{
	char **words;
	int word_count, a  = 0, b, c;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[a] == ' ')
	{
		a++;
	}

	word_count = word_counter(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < word_count; b++)
	{
		c = 0;
		while (str[a + c] != ' ' && str[a + c] != '\0')
			c++;
		words[b] = malloc(sizeof(char) * (c + 1));
		if (words[b] == NULL)
		{
			for (a = 0; a < b; a++)
				free(words[a]);
			free(words);
			return (NULL);
		}
		for (c = 0; str[a] != ' ' && str[a] != '\0'; a++, c++)
		{
			words[b][c] = str[a];
		}
		words[b][c] = '\0';
		while (str[a] == ' ')
			a++;
	}
	words[word_count] = NULL;
	return (words);
}

/**
 * word_counter - Function that counts the number of words.
 * @str: The string whose words are counted.
 *
 * Return: The number of words in the string.
 */

int word_counter(char *str)
{
	int a;
	int count = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
		{
			count++;
		}
	}
	return (count);
}
