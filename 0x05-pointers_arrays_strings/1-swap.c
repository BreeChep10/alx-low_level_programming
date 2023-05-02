#include "main.h"

/**
 * swap_int - Function that swap the valuse two integers.
 * @a: The first integer
 * @b: The second integer.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
