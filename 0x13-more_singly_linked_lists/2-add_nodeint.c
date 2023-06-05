#include "lists.h"

/**
 * add_nodeint - Function that adds a node at the beginnning of the list.
 * @head: Pointer to the heada of the node.
 * @n: The new value to assign to n in our list.
 *
 * Return: The address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Newnode;

	Newnode = malloc(sizeof(listint_t));

	if (!Newnode)
		return (NULL);
	Newnode->n = n;
	Newnode->next = *head;

	*head = Newnode;

	return (Newnode);
}
