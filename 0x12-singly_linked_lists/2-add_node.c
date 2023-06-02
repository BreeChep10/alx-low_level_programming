#include "lists.h"

/**
 * add_node - Function that adds a new node at the in list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: Pointer to the new head.
 *
 * Return: Return the address of the new node else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	const char *temp = str;
	unsigned int len = 0;
	list_t *newNode = malloc(sizeof(list_t));

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
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
