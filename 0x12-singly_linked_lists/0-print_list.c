#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list.
 * list_t: Our struct.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of words printed.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
