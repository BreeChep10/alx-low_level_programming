#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>

/**
 * struct printer - Struct to print.
 * @temp: Pointer to the storage.
 *
 * @: Pointer function associated.
 */

typedef struct printer
{
	char *temp;
	void (*f)(va_list args);
} printer_t;

#endif
