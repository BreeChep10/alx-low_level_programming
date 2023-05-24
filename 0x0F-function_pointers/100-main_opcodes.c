#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Number of arguements entered.
 * @argv: Array of arguements.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	char *ptr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i] && 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
