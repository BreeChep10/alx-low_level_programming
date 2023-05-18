#include <stdlib.h>

int _putchar(char c);
int product(int num1, int num2);
int is_digit(const char *str);
int _atoi(const char *str);
void print_result(int result);
void input_check(int argc, char *argv[], int *num1, int *num2);
int main(int argc, char *argv[]);

/**
 * product - Calculate the product of two numbers.
 * @num1: First integer in the product.
 * @num2: Second integer in the product.
 *
 * Return: The product of the two numbers.
 */

int product(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_digit - Checks whether a number is positive or not.
 * @str: Pointer to the string to be checked.
 *
 * Return: The string.
 */

int is_digit(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * _atoi - Function that converst a string to integer.
 * @str: The string to be converted.
 * 
 * Return: The converted string.
 */

int _atoi(const char *str)
{
	int num = 0;

	while (*str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

/**
 * print_result - Printing the result integer to the standard output.
 * @result: The integer to be printed out.
 *
 * Return: Void.
 */

void print_result(int result)
{
	char buffer[12], *buffer_ptr;
	int num_digits = 0, i;
	int temp = result;

	if (temp == 0)
	{
		num_digits = 1;
	}
	else
	{
		while (temp != 0)
		{
			temp /= 10;
			num_digits++;
		}
	}
	buffer_ptr = buffer + num_digits;
	*buffer_ptr = '\n';
	buffer_ptr--;

	while (result != 0)
	{
		*buffer_ptr = '0' + (result % 10);
		result /= 10;
		buffer_ptr--;
	}
	for (i = 0; i < num_digits + 1; i++)
	{
		_putchar(buffer[i]);
	}
}
/**
 * input_check - Checking the integers entered.
 * @argc: The number of arguements entered.
 * @argv: The arguements entered.
 * @num1; The first number.
 * @num2: The second number.
 *
 * Return: Void
 */

void input_check(int argc, char *argv[], int *num1, int *num2)
{
	int i = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		char error[] = "Error\n";

		while (error[i] != '\0')
		{
			_putchar(error[i]);
			i++;
		}
		_putchar('\n');
		exit(98);
	}
	*num1 = _atoi(argv[1]);
	*num2 = _atoi(argv[2]);
}

/**
 * main - Entry point.
 * @argc: The number of arguements entered.
 * @argv: The arguements entered.
 *
 * Return: The product.
 */

int main(int argc, char *argv[])
{
	int num1, num2, results;

	input_check(argc, argv, &num1, &num2);

	results = product(num1, num2);
	print_result(results);

	return (0);
}
