#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing all the numbers of base 16 in lower case.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
