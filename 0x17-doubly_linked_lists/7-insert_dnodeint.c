#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at a given
 * position.
 * @h: Pointer to the head of the linked list.
 * @idx: the nth position at which to insert the new node.
 * @n: The value to be added to the new node.
 *
 * Return: Address of the new node at index idx.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;
	unsigned int count = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (!current || !current->next)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = current;
	newnode->next = current->next;
	current->next->prev = newnode;
	current->next = newnode;

	return (newnode);
}
