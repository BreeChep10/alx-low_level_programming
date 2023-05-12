#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the multiplication of two numbers
 * followed by a new line.
 * @argc: Contains the number of arguements passe.
 * @argv: Pointer to the array of arguements.
 *
 * Return: The value of the multiplication or error if there are
 * no arguements.
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc - 1 != 2)
	{
		printf("Error\n");
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
