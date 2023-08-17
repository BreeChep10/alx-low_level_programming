#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - The entry point for the program.
 * @argc: The number of arguements.
 * @argv: An array of arguements entered.
 *
 * Return: 0 upon success.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char generated_password[7], *codex;
	int input_length = strlen(argv[1]), i, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (input_length ^ 59) & 63;
	generated_password[0] = codex[temp];

	temp = 0;
	for (i = 0; i < input_length; i++)
		temp += argv[1][i];
	generated_password[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < input_length; i++)
		temp *= argv[1][i];
	generated_password[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < input_length; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	generated_password[3] = codex[rand() & 63];

	temp = 0;
	for (i = 0; i < input_length; i++)
		temp += (argv[1][i] * argv[1][i]);
	generated_password[4] = codex[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	generated_password[5] = codex[(temp ^ 229) & 63];

	generated_password[6] = '\0';
	printf("%s", generated_password);
	return (0);
}

