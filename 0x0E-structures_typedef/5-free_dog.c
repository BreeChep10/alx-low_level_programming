#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that freees dog.
 * @d: Pointer to the struct dog to free.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
