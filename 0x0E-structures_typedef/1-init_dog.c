#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: Pointer to the struct dog.
 * @name: The name member of the struct.
 * @age: The age member of the struct.
 * @owner: The owner member of the struct.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
