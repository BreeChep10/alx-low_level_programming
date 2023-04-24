#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing numbers from 0 to 9 with putchar.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
