#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list printed.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *holder = h;
	size_t count = 0;

	while (holder)
	{
		if (holder->n)
		{
			printf("%d\n", holder->n);
			count++;
		}
		holder = holder->next;
	}
	return (count);
}
