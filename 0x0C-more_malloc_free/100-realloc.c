#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free.
 * @old_size: The size previously allocated.
 * @new_size: The new size allocated in memory.
 * @ptr: Pointer to the already allocated memory.
 *
 * Return: If new_size > old_size, the “added” memory shouldn't be
 * initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size), for all
 * values of old_size and new_size.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int index;
	char *temp, *new_ptr, *err;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		err = malloc(new_size);
		if (err == NULL)
			return (NULL);
		return (err);
	}
	new_ptr = ptr;
	err = malloc(sizeof(*new_ptr) * new_size);
	if (err == NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp = err;
	for (index = 0; index < old_size && index < new_size; index++)
		temp[index] = *new_ptr++;
	free(ptr);
	return (err);
}
