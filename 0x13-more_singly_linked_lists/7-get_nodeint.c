#include "lists.h"

/**
 * get_nodeint_at_index - Function that gets the nth position of the list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the nth node, or NULL if the node is not there
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
