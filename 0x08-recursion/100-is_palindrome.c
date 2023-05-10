#include "main.h"

/**
 * _strlen_len - Functions that counts the length of a string.
 * @s: The string to be checked.
 *
 * Return: The length of a string.
 */

int _strlen_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_len(s + 1));
}

/**
 * _is_palindrome_recursion - Checks if a string is a palindrom recursively.
 * @s: The string to be checked.
 * @start: The start of a string.
 * @end: The end of a string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */

int _is_palindrome_recursion(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_recursion(s, start + 1, end - 1));
}

/**
 * is_palindrome - Function that checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if true else 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen_len(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (_is_palindrome_recursion(s, 0, len - 1));
}
