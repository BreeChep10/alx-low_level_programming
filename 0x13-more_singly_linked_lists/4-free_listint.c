#include "lists.h"

/**
 * free_listint - Function that frees the list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
