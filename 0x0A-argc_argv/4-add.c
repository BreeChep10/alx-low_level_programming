#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The starting point of the program that adds two numbers.
 * @argc: The number of arguements passed to argv.
 * @argv: Pointer to the arguements passed in array.
 *
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int index, a;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (index = 1; index < argc; index++)
		{
			for (a = 0; argv[index][a]; a++)
			{
				if (argv[index][a] < '0' || argv[index][a] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[index]);
		}
		printf("%d\n", add);
	}
	return (0);
}
