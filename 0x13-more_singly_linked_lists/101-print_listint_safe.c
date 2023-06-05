#include "lists.h"

listadd_t *addNode_address(listadd_t **head, const listint_t *address);
void free_listnew(listadd_t *head);


/**
 */
size_t print_listint_safe(const listint_t *head)
{
	listadd_t *newptr;
	listadd_t *ptr;
	size_t count = 0;

	newptr = NULL;
	while (head)
	{
		ptr = newptr;
		while (ptr)
		{
			if(head == ptr->address)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listnew(newptr);
				return (count);
			}
			ptr = ptr->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		addNode_address(&newptr, head);
		head = head->next;
		count++;
	}
	free_listnew(newptr);
	return (count);
}
/**
 */

listadd_t *addNode_address(listadd_t **head, const listint_t *address)
{
	listadd_t *new;

	new = malloc(sizeof(listadd_t));
	if (!new)
	{
		free_listnew(*head);
		exit(98);
	}
	new->address = (void *)address;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 */

void free_listnew(listadd_t *head)
{
	listadd_t *del;

	while (head != NULL)
	{
		del = head;
		head = head->next;
		free(del);
	}
}
