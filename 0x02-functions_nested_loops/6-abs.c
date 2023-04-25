#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer whose absolute value is to be computed.
 *
 * Return: Absolute value of @n.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
