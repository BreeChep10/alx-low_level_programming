#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and initializes
 * it with a specific character.
 * @size: The lengthe of the array.
 * @c: The character to be assigned in each element of the array.
 *
 * Return: The assigned character size times.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
