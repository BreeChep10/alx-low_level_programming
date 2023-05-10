#include "main.h"

/**
 * _sqrt_root - Function that helps get he squaroot.
 * @n: The number to be calculated.
 * @root: The number that is the root.
 *
 * Return: Squareroot of the number.
 */

int _sqrt_root(int n, int root)
{
	int square = root * root;

	if (square == n)
	{
		return (root);
	}
	else if (square > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_root(n, root + 1));
	}
}

/**
 * _sqrt_recursion - Function that gets the squaroot of a number.
 * @n: The number to be calculated.
 *
 * Return: The squareroot.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_root(n, 1));
}
