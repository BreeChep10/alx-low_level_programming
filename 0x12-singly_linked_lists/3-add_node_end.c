#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of list_t list.
 * @head: Pointer to the head of the list.
 * @str: Pointer to the new string to be added.
 *
 * Return: Retuns the address of the new element else NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int len = 0;
	const char *temp = str;

	if (!newNode)
		return (NULL);
	while (*temp)
	{
		len++;
		temp++;
	}
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		list_t *current = *head;

		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}
