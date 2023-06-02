#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - Function that prints all.
 * @format: List all arguements.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int a = 0, integerN;
	char *separator1 = "", *separator2 = ", ", *s, character;
	va_list all_args;

	va_start(all_args, format);

	if (format != NULL)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					character = va_arg(all_args, int);
					printf("%s%c", separator1, character);
					break;
				case 'i':
					integerN = va_arg(all_args, int);
					printf("%s%d", separator1, integerN);
					break;
				case 'f':
					printf("%s%f", separator1, va_arg(all_args, double));
					break;
				case 's':
					s = va_arg(all_args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator1, s);
					break;
				default:
					a++;
					continue;
			}
			separator1 = separator2;
			a++;
		}
	}
	printf("\n");
	va_end(all_args);
}
