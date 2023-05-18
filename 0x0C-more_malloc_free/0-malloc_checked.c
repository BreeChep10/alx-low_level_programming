#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: The integer to be allocated memory.
 *
 * Return: void.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *memory;

	memory = malloc(sizeof(unsigned int) * b);

	if (memory == NULL)
	{
		return(98);
	}
}
