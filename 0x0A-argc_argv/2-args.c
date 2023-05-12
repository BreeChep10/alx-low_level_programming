#include <stdio.h>


/**
 * main - Program that prints the arguements including the program name.
 * @argc: Number of the arguements in argv.
 * @argv: Pointer to the array argv with arguements.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
