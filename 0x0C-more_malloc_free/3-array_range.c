#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: The minimum value entered.
 * @max: The maximum value in the array.
 *
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *new_array;
	int index, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	new_array = malloc(sizeof(int) * size);

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		new_array[index] = min++;
	}
	return (new_array);
}
