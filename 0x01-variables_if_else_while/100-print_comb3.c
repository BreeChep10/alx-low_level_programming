#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing all possible different combinations of two digits.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int x, y;
	int first_combination = 1;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (!first_combination)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(x + '0');
			putchar(y + '0');

			first_combination = 0;
		}
	}
	putchar('\n');
	return (0);
}
