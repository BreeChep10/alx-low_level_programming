#include "main.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a
 * given index.
 * @n: Pointer to the number whose value is to be set.
 * @index: The position at which our value is to be set.
 *
 * Return: 1 upon success else -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bitmask = 1UL << index;
	*n |= bitmask;

	return (*n);
}
