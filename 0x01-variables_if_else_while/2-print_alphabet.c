#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing the alphabet in lower case.
 *
 * Return: Always success 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
