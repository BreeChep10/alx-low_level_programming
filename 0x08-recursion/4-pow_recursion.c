#include "main.h"

/**
 * _pow_recursion - function that returns of x raised to the power of y.
 * @x: Fisrt number to be checked.
 * @y: Second number to be checked.
 *
 * Return: Returns the value of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
