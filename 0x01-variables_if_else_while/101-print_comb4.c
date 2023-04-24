#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Printing all possible different combinations of three digits.
 *
 * Return: Always (0) success.
 */
int main(void)
{
	int a, b, c;
	int first_combo = 1;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (!first_combo)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				first_combo = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
