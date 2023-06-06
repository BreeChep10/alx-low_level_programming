#include "lists.h"

/**
 * free_listint_safe - Funnction that frees a linked list safely.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int store;
	listint_t *ptr;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		store = *h - (*h)->next;
		if (store > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
