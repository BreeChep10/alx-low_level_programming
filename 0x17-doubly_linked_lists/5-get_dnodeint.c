#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a list.
 * @head: Pointer to the head of the list.
 * @index: The position at which the node should be returned.
 *
 * Return: node at position index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
