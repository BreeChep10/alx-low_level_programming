#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 * of a doubly linked list.
 * @head: Pointer to the head of the linked list.
 * @n: The value to be added to the new node.
 *
 * Return: Pointer to the new node added.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
