#include "lists.h"

/**
 * free_dlistint - Function that frees the doubly linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
