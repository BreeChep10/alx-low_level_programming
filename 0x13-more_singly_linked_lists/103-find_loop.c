#include "lists.h"

/**
 * find_listint_loop - Function that finds a loop in the linked list.
 * @head: Pointer to th head of the linked list.
 *
 * Return: Address of the loop wher it starts or NULL if not found.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)	/*Checking of loop is detected*/
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)	/*when loop is not detected*/
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);	/*return the address of the loop where the loop starts*/
		}
	}
	return (NULL);	/*Loop not pound*/
}
