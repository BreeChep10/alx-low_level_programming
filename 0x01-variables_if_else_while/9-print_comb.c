#include <stdio.h>
/**
 * main - Entry point.
 *
 * Discription: Printing all possible combinations of single-digit numbers.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
