#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that adds two integers.
 * @a: First integer to be added.
 * @b: Second integer to be added.
 *
 * Return: The addition of the two numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that subtracts two numbers.
 * @a: Fisrt number checked.
 * @b: Second number checked.
 *
 * Return: The subtraction of two numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies 2 numbers.
 * @a: First number to be checked.
 * @b: Second number to be checked.
 *
 * Return: The multiplication of 2 numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two numbers.
 * @a: Fisrt number checekd.
 * @b: Second number checekd.
 *
 * Return: Division of the two numbers if b is not zero eles exit.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Function that gets the remainder of a number.
 * @a: Fisrt integer.
 * @b: Second integer.
 *
 * Return: THe mod of a number by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
