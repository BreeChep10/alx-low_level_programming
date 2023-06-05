#include "lists.h"

/**
 * reverse_listint - Function that prints the list in reverse.
 * @head: Pointer to the head of the  linked list.
 *
 * Return: The updated head address.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *next;

	ptr = *head;
	if (!ptr)
		return (NULL);
	next = ptr->next;
	ptr->next = NULL;
	while (next)
	{
		ptr = next;
		next = next->next;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
