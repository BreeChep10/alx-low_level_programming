#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the (n) of a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Returns the sum of all elements in the list.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
