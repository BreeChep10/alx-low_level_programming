#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: POinter to the ehad of our list.
 *
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t *now = head;
	list_t *next;

	while (now)
	{
		next = now->next;
		free(now->str);
		free(now);
		now = next;
	}
}
