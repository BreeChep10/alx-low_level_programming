#include "function_pointers.h"

/**
 * int_index - Function that searches an integer.
 * @array: Array to be searched.
 * @size: size of the array.
 * @cmp: Function pointer to compare.
 *
 * Return: The number found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
