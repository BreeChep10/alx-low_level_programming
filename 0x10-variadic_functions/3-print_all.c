#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Function to print a character.
 * @args: The list of arguements pointing to the character.
 *
 * Return: void.
 */

void print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	printf("%c", character);
}

/**
 * print_integer - Function that prints an integer.
 * @args: The list of arguements to be printed.
 *
 * Return: void.
 */

void print_integer(va_list args)
{
	int nums;

	nums = va_arg(args, int);
	printf("%d", nums);
}

/**
 * print_float - Function that prints a float.
 * @args: A list of arguments to the float.
 *
 * Return: void.
 */

void print_float(va_list args)
{
	float float_nums;

	float_nums = va_arg(args, double);
	printf("%f", float_nums);
}

/**
 * print_string - Function that prints a string.
 * @args: A list of arguements.
 *
 * Return: void.
 */

void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Function that prints anything.
 * @format: The list of arguements passed to the function.
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list all_args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t cases[] = {
		{"c", print_char},
		{"d", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(all_args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(cases[j].temp)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			cases[j].f(all_args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(all_args);
}
