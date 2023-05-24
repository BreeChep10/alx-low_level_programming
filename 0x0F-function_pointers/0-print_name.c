#include "function_pointers.h"

/**
 * print_name - Function hat prints a name.
 * @name: The name to be printed.
 * @f: Pointer to function.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
