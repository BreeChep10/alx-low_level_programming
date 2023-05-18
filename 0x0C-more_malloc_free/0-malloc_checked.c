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
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);
	return (memory);
}
