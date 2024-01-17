#include "search_algos.h"

/**
 * jump_search - Search for a value in an array using Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of 'value', or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value && prev < size)
	{
		prev += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	i = prev - step;
	for (; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
