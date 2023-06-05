#  0x13-more_singly_linked_lists

More practice on linked lists.

## TASKS
[0. Print list](0-print_listint.c)

Write a function that prints all the elements of a listint_t list.

	• Prototype: size_t print_listint(const listint_t *h)
	• Return: the number of nodes
	• Format: see example
	• You are allowed to use printf.

[1. List length](1-listint_len.c)

Write a function that returns the number of elements in a linked listint_t list.

	• Prototype: size_t listint_len(const listint_t *h);

[2. Add node](2-add_nodeint.c)

Write a function that adds a new node at the beginning of a listint_t list.

	• Prototype: listint_t *add_nodeint(listint_t **head, const int n);
	• Return: the address of the new element, or NULL if it failed.

[3. Add node at the end](3-add_nodeint_end.c)

Write a function that adds a new node at the end of a listint_t list.

	• Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
	• Return: the address of the new element, or NULL if it failed.

