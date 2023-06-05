#include "lists.h"

/**
 * add_nodeint_end - Function that addss a new node at the end of the list.
 * @head: Pointer to the head of the list.
 * @n: The new value to be assigned to n
 *
 * Return: Address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		listint_t *current = *head;

		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}
