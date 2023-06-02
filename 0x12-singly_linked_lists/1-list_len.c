#include "lists.h"

/**
 * list_len - Function that returns the no of elements in a list..
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str)
			count++;
		ptr = ptr->next;
	}
	return (count);
}
