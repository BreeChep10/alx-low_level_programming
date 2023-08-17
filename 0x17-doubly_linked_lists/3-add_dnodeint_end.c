#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end
 * of a doubly linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 *
 * Return: The new node added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (current->next)
		current = current->next;

	newnode->prev = current;
	current->next = newnode;

	return (newnode);
}
