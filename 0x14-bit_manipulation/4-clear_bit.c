#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0
 * at a given index.
 * @n: Pointer to a number whose bit value is to be set.
 * @index: The position at which to change the bit.
 *
 * Return: -1 upon failur else 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bitmask = 1UL << index;
	*n = *n & ~bitmask;

	return (1);
}
