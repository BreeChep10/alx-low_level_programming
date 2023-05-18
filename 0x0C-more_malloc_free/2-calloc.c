#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: Number of elemsts in the array.
 * @size: Size of each elements in bytes.
 *
 * Return: Pointer to the allocated memory or NULL if allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *store;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	store = malloc(sizeof(char) * total_size);

	if (store == NULL)
		return (NULL);

	/* Allocating Zero to each byte manually */
	/* similar function, memset() */

	for (i = 0; i < total_size; i++)
	{
		store[i] = 0;
	}
	return (store);
}
