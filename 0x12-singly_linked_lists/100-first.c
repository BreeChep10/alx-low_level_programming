#include "lists.h"

void print_message(void) __attribute__((constructor));

/**
 * print_message - Function that prints a message before main.
 */

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
