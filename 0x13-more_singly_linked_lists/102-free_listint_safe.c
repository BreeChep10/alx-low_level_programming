#include "lists.h"

/**
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
