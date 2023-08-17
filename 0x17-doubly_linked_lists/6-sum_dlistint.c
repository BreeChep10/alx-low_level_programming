#include "lists.h"

/**
 * sum_dlistint - Function that sums up all the integers
 * in the linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of the integers in the list, 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
