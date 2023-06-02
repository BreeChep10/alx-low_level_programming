# 0x12-singly_linked_lists

A singly linked list is a data structure composed of nodes, where each node contains a value and a reference to the next node in the list. It is called "singly" because the reference points only to the next node and not to the previous one.

## TASKS:

[0. Print list](0-print_list.c)

Write a function that prints all the elements of a list_t list.
[test file](0-main.c)

	• Prototype: size_t print_list(const list_t *h);
	• Return: the number of nodes
	• Format: see example
	• If str is NULL, print [0] (nil)
	• You are allowed to use printf.

[1. List length](1-list_len.c)

Write a function that returns the number of elements in a linked list_t list.

	• Prototype: size_t list_len(const list_t *h);

[2. Add node](2-add_node.c)

Write a function that adds a new node at the beginning of a list_t list.

	• Prototype: list_t *add_node(list_t **head, const char *str);
	• Return: the address of the new element, or NULL if it failed
	• str needs to be duplicated
	• You are allowed to use strdup.

[3. Add node at the end](3-add_node_end.c)

Write a function that adds a new node at the beginning of a list_t list.

	• Prototype: list_t *add_node(list_t **head, const char *str);
	• Return: the address of the new element, or NULL if it failed
	• str needs to be duplicated
	• You are allowed to use strdup.

[4. Free list](4-free_list.c)

Write a function that frees a list_t list.

	• Prototype: void free_list(list_t *head);

[5. The Hare and the Tortoise](100-first.c)

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

	• You are only allowed to use the printf function
	• You are not allowed to use interrupts
	• Your program will be compiled using nasm and gcc:
