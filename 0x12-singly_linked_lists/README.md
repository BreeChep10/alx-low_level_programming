# 0x12-singly_linked_lists

A singly linked list is a data structure composed of nodes, where each node contains a value and a reference to the next node in the list. It is called "singly" because the reference points only to the next node and not to the previous one.

## TASKS:

[0. Print list](0-print_list.c)

Write a function that prints all the elements of a list_t list.

	• Prototype: size_t print_list(const list_t *h);
	• Return: the number of nodes
	• Format: see example
	• If str is NULL, print [0] (nil)
	• You are allowed to use printf.

[1. List length](1-list_len.c)

Write a function that returns the number of elements in a linked list_t list.

	• Prototype: size_t list_len(const list_t *h);
