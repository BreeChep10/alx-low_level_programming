#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing the lower case alphabet in reverse using putchar.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
