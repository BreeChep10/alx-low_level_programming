#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elemnts
 * in a list.
 * @h: Pointer to the head of a doubly linked list.
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
