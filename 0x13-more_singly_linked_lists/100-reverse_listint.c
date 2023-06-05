#include "lists.h"

/**
 * reverse_listint - Function that prints the list in reverse.
 * @head: Pointer to the head of the  linked list.
 *
 * Return: The updated head address.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
