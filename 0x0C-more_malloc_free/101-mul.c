#include <stdlib.h>

int _putchar(char c);
int main(int argc, char *argv[]);
void multiply(char *num1, char *num2);
void print_error(void);

/**
 * print_error - Print the word error.
 */

void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * multiply - Function that multiplies 2 numbers.
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 *
 * Return: The product of the two numbers.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, sum;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc((len1 + len2) * sizeof(int));
	if (result == NULL)
	{
		print_error();
	}
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i] += carry;
	}
	i = 0;

	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
}

/**
 * main - Function that takes in arguements and multiplies them.
 * @argc: Number of arguements passed.
 * @argv: Pointer to the array of arguements.
 *
 * Return: Results.
 */

int main(int argc, char *argv[])
{
	int i;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
		print_error();

	for (i = 0; num1[i]; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
			print_error();
	}
	for (i = 0; num2[i]; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
			print_error();
	}
	multiply(num1, num2);

	return (0);
}

