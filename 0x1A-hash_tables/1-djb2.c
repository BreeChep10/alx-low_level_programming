#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the DJB2 algorithm.
 * @str: The string to be hashed.
 *
 * Return: The calculated hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		/* DJB2 hash algorithm: hash = hash * 33 + c */
		hash = ((hash << 5) + hash) + c;
	}
	return hash;
}
