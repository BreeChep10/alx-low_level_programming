#include "main.h"
/**
 * flip_bits - Function that returns the number of bits you need
 * to flip a number n to m.
 * @n: The number to flip.
 * @m: The number to flip to.
 *
 * Return: The number of times to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;

	while (xor != 0)
	{
		xor &= (xor - 1);
		count++;
	}
	return (count);
}
