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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
