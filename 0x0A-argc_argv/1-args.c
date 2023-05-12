#include <stdio.h>

/**
 * main - Program that prints the number of arguements it has.
 * @argc: The number of arguements argv has.
 * @argv: A pointer to the array of arguements made.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
