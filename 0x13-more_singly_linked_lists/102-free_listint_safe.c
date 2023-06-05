#include "lists.h"

/**
 * free_listint_safe - Function that frees a list safely.
 * @h: Pointer to th ehead of the list.
 *
 * Return: Size of the list that has been freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *delete_node, *current;
	listadd_t *headadd, *ptr;
	size_t count = 0;

	current = *h;
	headadd = NULL;
	if (h)
	{
		while (current)
		{
			ptr = headadd;
			while (ptr)
			{
				if (current == (listint_t *)ptr->address)
				{
					free(current);
					free_listnew(headadd);
					*h = NULL;
					return (count);
				}
				ptr = ptr->next;
			}
			delete_node = current;
			if (addNode_address(&headadd, current) == NULL)
			{
				free_listnew(headadd);
				exit(98);
			}
			current = current->next;
			free(delete_node);
			count++;
		}
		free_listnew(headadd);
		*h = NULL;
	}
	return (count);
}
