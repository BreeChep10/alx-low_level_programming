#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at position
 * index.
 * @head: pointer to the head of the linked list.
 * @index: Position at which to delete the node.
 *
 * Return: 1 upon success else, -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head || !(*head))
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	if (!current)
		return (-1);
	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;
	free(current);
	return (1);
}
