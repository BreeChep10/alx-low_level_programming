#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int print_character(va_list args);
int print_integerN(va_list args);
int print_string(va_list args);
int print_floats(va_list args);

/**
 * print_all - Function that prints all.
 * @format: Coontains the list of aarguments.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int a, b;
	char *separator1 = "";
	char *separator2 = ", ";
	va_list all_args;
	print_t ops[] = {
		{"c", print_character},
		{"i", print_integerN},
		{"s", print_string},
		{"f", print_floats},
		{NULL, NULL}
	};

	va_start(all_args, format);
	a = 0;

	while (format != NULL && format[a])
	{
		b = 0;

		while (ops[b].c != NULL)
		{
			if (format[a] == *(ops[b].c))
			{
				printf("%s", separator1);
				ops[b].f(all_args);
			}
			b++;
		}
		separator1 = separator2;
		a++;
	}
	printf("\n");
	va_end(all_args);
}
/**
 * print_character - Function that prints character.
 * args: List of arguements.
 *
 * Return: 0 always.
 */

int print_character(va_list args)
{
	printf("%c", va_arg(args, int));
	return (0);
}

/**
 * print_integerN - Function that prints an ineteger.
 * @args: Lists of arguements passed.
 *
 * Return: 0 always.
 */

int print_integerN(va_list args)
{
	printf("%d", va_arg(args, int));
	return (0);
}

/**
 * print_string - Function that prints a string.
 * @args: List of arguements passed.
 *
 * Return: 0 always.
 */

int print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}

/**
 * print_floats - Function that prints float numbers.
 * args: Lists of arguements given.
 *
 * Return: Void
 */

int print_floats(va_list args)
{
	printf("%f", va_arg(args, double));
	return (0);
}
