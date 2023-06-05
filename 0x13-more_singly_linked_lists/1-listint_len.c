#include "lists.h"

/**
 * listint_len - Function the returns the no, of elemsts in a list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in a list.
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
