#include "lists.h"

/**
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr->n)
			count++;
		ptr = ptr->next;
	}
	return (count);
}
