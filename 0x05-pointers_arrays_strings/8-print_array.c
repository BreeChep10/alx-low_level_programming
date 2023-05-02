#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an imputted number of elements,
 * of an array of integers.
 * @n: The number of elements to be printed.
 * @a: The array of integers.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
		printf("\n");
	}
}
