#include <stdio.h>
#include <stdlib.h>

/**
 * coin_count - function that counts the number of coins in change.
 * @cents: The changeto be gotten from.
 *
 * Return: The number of changes needed.
 */

int coin_count(int cents)
{
	if (cents == 0)
	{
		return (0);
	}
	if (cents >= 25)
	{
		return (1 + coin_count(cents - 25));
	}
	else if (cents >= 10)
	{
		return (1 + coin_count(cents - 10));
	}
	else if (cents >= 5)
	{
		return (1 + coin_count(cents - 5));
	}
	else if (cents >= 2)
	{
		return (1 + coin_count(cents - 2));
	}
	return (1 + coin_count(cents - 1));
}

/**
 * main - Program that prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: Number of arguements in the array argv.
 * @argv: Pointer to the arguements passed.
 *
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int cents;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	printf("%d\n", coin_count(cents));

	return (0);
}
