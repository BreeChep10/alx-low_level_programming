#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Struct that stores info on a dog.
 * @name: 1st member in the struct that stores the name.
 * @age: 2nd member in the struct tha has the age of the dog.
 * @owner: 3rd member in the struct that has the info on owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
