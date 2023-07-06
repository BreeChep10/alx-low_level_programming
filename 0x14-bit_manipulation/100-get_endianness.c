#include "main.h"
/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: 0 if big endian else 1.
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
