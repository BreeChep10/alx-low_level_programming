#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to
 * unsigned int.
 * @b: Pointer to the string with 0 and 1 chars.
 *
 * Return: 0 if there is no 0 or 1 else return result.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = ((result << 1) + b[i] - '0');
	}
	return (result);
}
