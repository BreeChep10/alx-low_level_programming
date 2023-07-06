#include "main.h"
/**
 * get_bit - Function that gets the value of a bit at
 * a given index.
 * @n: Value of the number to be gotten.
 * @index: Position to be gotten from the number n.
 *
 * Return: -1 if the index is invalid else the position.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bitmask = 1UL << index;
	bit = n & bitmask;

	return ((bit != 0) ? 1 : 0);
}
