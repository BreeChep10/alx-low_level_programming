#include "main.h"

/**
 * _prime_checker - helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The divisor to try.
 *
 * Return: 1 if number is prime, else return 0.
 */

int _prime_checker(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (_prime_checker(n, i + 1));
}

/**
 * is_prime_number - Function that checks whether a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_checker(n, 2));
}
