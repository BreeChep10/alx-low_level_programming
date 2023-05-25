#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>
/**
 * struct print - struct for 3
 * @c: character to check
 * @f: function to point to
 */
typedef struct print
{
	char *c;
	int (*f)(va_list args);
} print_t;

#endif
