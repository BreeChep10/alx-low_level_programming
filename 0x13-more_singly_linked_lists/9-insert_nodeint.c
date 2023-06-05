#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a node at the nth pos.
 * @head: Pointer to the head of the linked list.
 * @idx: Index where the new node should be added.
 * @n: The value to be addede at the nth index.
 *
 * Return: The address of the new node, or Null if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *newNode;
	unsigned int i;

	if (!head)
		return (NULL);
	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	ptr = *head;
	for (i = 0; i < idx - 1 && ptr; i++)
	{
		ptr = ptr->next;
	}
	if (!ptr)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = ptr->next;
	ptr->next = newNode;

	return (newNode);
}
