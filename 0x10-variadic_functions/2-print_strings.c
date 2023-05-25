#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings.
 * @separator: The string to be printed between strings.
 * @n: Number of arguements passed.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);

		if (separator == NULL)
			printf("(nil)");

		else
			printf("%s", ptr);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
