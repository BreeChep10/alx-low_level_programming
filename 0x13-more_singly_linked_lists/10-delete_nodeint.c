#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes a node at the nth inndex.
 * @head: Pointer to the head of the linked list.
 * @index: The position to delete the node.
 *
 * Return: -1 upon failure, 1 upon success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	ptr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (!ptr->next)
			return (-1);
		ptr = ptr->next;
	}
	temp = ptr->next;
	if (!temp)
		return (-1);
	ptr->next = temp->next;
	free(temp);

	return (1);
}
