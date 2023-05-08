#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer to the matrix to be added.
 * @size: The size of the matrix.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += *(a + index * size + index);
		sum2 += *(a + (index * size) + (size - index - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
