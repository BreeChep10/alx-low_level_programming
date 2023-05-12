#include <stdio.h>

/**
 * main - Prints the program name followed by a new line.
 * @argc: Number of arguements in argv.
 * @argv: Pointer to the array of arguements.
 *
 * Return: 0 always.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
