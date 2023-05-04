#include "main.h"

/**
 * reverse_array - Reverses the elements in an array.
 * @a: Pointer to the array to be reversed.
 * @n: The number of elements in an array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index;
	int swap;

	for (index = 0; index < n / 2; index++)
	{
		swap = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = swap;
	}
}
