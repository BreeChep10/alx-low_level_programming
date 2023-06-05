#include "lists.h"

/**
 * pop_listint - Function that delets the head not of the list.
 * @head: Poinnter to the pointer to the head of the list.
 *
 * Return: The datta of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head || !*head)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = (*head)->next;
	free(ptr);

	return (data);
}
