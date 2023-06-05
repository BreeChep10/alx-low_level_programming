#include "lists.h"

/**
 * free_listint2 - Function that frees a list and sets head to NULL.
 * @head: Pointer to the head of the list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!*head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
