#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements
 * in a doubly linked linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in a linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
