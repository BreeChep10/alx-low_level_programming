#include "lists.h"

/**
 * reverse_listint - Function that prints the list in reverse.
 * @head: Pointer to the head of the  linked list.
 *
 * Return: The updated head address.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;
	return (*head);
}
