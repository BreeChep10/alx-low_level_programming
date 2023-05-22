#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function that counts the length of a string.
 * @str: The string to counted.
 * Return: Len of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _memcpy - Function that copies a string.
 * @dest: The string to be copied to.
 * @src: The string to be copied from.
 * @len: The lenght of the string.
 * Return: The copied string.
 */

void _memcpy(char *dest, char *src, int len)
{
	int i;

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
}

/**
 * new_dog - Function that creates a new dog.
 * @name: The name member in the struct.
 * @age: The age member in the struct.
 * @owner: The owner memeber in the struct.
 *
 * Return: Pointer to the newly created dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	
	name_len = _strlen(name);
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->name, name, name_len);
	new_dog->name[name_len] = '\0';

	owner_len = _strlen(owner);

	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_memcpy(new_dog->owner, owner, owner_len);
	new_dog->owner[owner_len] = '\0';

	new_dog->age = age;

	return (new_dog);
}
