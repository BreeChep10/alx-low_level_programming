#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * @d: Pointer to the struct dog.
 *
 * Return: Void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
