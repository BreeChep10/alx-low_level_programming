#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: The name to be printed.
 * @f: Pointer to void function.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
