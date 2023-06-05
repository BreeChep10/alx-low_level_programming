#include "lists.h"

/**
 * reverse_listint - Function that prints the list in reverse.
 * @head: Pointer to the head of the  linked list.
 *
 * Return: The updated head address.
 */

listint_t *reverse_listint(listint_t **head)
{
		listint_t *ahead, *behind;

			if (head == NULL || *head == NULL)
						return (NULL);

				behind = NULL;

					while ((*head)->next != NULL)
							{
										ahead = (*head)->next;
												(*head)->next = behind;
														behind = *head;
																*head = ahead;
																	}

						(*head)->next = behind;

							return (*head);
}
