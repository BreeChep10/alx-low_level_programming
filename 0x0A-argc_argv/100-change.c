#include <stdio.h>
#include <stdlib.h>

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
	int changes[] = { 25, 10, 5, 2, 1 };
	int count;
	int num;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	count = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (num = 0; num < 5 && cents >= 0; num++)
	{
		while (cents >= changes[num])
		{
			count++;
			cents -= changes[num];
		}
	}
	printf("%d\n", count);
	return (0);
}
